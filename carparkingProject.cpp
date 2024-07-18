#include <iostream>
#include <string>
#include <vector>

class Vehicle {
protected:
    std::string licensePlate;
    std::string type;

public:
    Vehicle(std::string lp, std::string t) : licensePlate(lp), type(t) {}
    virtual ~Vehicle() = default;

    std::string getLicensePlate() const { return licensePlate; }
    std::string getType() const { return type; }

    virtual void display() const {
        std::cout << "Type: " << type << ", License Plate: " << licensePlate;
    }
};

class Car : public Vehicle {
public:
    Car(std::string lp) : Vehicle(lp, "Car") {}
};

class Motorcycle : public Vehicle {
public:
    Motorcycle(std::string lp) : Vehicle(lp, "Motorcycle") {}
};

class Customer {
private:
    std::string name;
    std::string contactInfo;

public:
    Customer(std::string n, std::string ci) : name(n), contactInfo(ci) {}

    std::string getName() const { return name; }
    std::string getContactInfo() const { return contactInfo; }

    void display() const {
        std::cout << "Customer: " << name << ", Contact: " << contactInfo;
    }
};

class ParkingSpot {
private:
    int spotNumber;
    Vehicle* parkedVehicle;
    Customer* customer;

public:
    ParkingSpot(int number) : spotNumber(number), parkedVehicle(nullptr), customer(nullptr) {}

    bool isOccupied() const { return parkedVehicle != nullptr; }
    int getSpotNumber() const { return spotNumber; }

    bool parkVehicle(Vehicle* vehicle, Customer* cust) {
        if (!isOccupied()) {
            parkedVehicle = vehicle;
            customer = cust;
            return true;
        }
        return false;
    }

    void removeVehicle() {
        parkedVehicle = nullptr;
        customer = nullptr;
    }

    void display() const {
        std::cout << "Spot " << spotNumber << ": ";
        if (isOccupied()) {
            parkedVehicle->display();
            std::cout << ", ";
            customer->display();
        } else {
            std::cout << "Empty";
        }
        std::cout << std::endl;
    }
};

class ParkingLot {
private:
    std::vector<ParkingSpot> spots;

public:
    ParkingLot(int capacity) {
        for (int i = 1; i <= capacity; ++i) {
            spots.emplace_back(i);
        }
    }

    bool parkVehicle(Vehicle* vehicle, Customer* customer) {
        for (auto& spot : spots) {
            if (!spot.isOccupied()) {
                return spot.parkVehicle(vehicle, customer);
            }
        }
        std::cout << "Parking lot is full!" << std::endl;
        return false;
    }

    void displayParkedVehicles() const {
        std::cout << "Parked Vehicles:\n";
        for (const auto& spot : spots) {
            spot.display();
        }
    }
};

int main() {
    ParkingLot myParkingLot(5);

    Car car1("BC123");
    Motorcycle bike1("YZ457");
    Car car2("MN423");
    Car car3("QR614");

    Customer cust1("Sanjay Gore", "123-456-7890");
    Customer cust2("Janvi Manse", "234-567-8901");
    Customer cust3("Aliya Kapse", "345-678-9012");
    Customer cust4("Meena Sharma", "456-789-0123");

    myParkingLot.parkVehicle(&car1, &cust1);
    myParkingLot.parkVehicle(&bike1, &cust2);
    myParkingLot.parkVehicle(&car2, &cust3);
    myParkingLot.parkVehicle(&car3, &cust4);

    myParkingLot.displayParkedVehicles();

    return 0;
}
