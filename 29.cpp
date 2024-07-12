#include <iostream>
#include <string>
using namespace std;

int main() {
    int choice;
    char repeat;
    bool continueProgram = true;

    while (continueProgram) {
        do {
            cout << "Enter your choice:\n"
                 << "1. Park a car\n"
                 << "2. Park a bike\n"
                 << "3. Park a rickshaw\n"
                 << "4. Exit\n"
                 << "5. Display question\n";
            cin >> choice;

            switch (choice) {
                case 1:
                    cout << "Car parked successfully.\n";
                    break;
                case 2:
                    cout << "Bike parked successfully.\n";
                    break;
                case 3:
                    cout << "Rickshaw parked successfully.\n";
                    break;
                case 4:
                    cout << "Exiting the parking system.\n";
                    continueProgram = false;
                    break;
                case 5:
                    cout << "Do you want to perform again? (y/n): ";
                    cin >> repeat;
                    if (repeat != 'y' && repeat != 'Y') {
                        continueProgram = false;
                    }
                    break;
                default:
                    cout << "Invalid choice. Please try again.\n";
            }
        } while (choice != 4 && choice != 5);

        if (choice == 5 && (repeat == 'y' || repeat == 'Y')) {
            continue;
        } else {
            break;
        }
    }

    cout << "Thank you for using the parking system.\n";
    return 0;
}
