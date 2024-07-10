#include<iostream>
using namespace std;

int main() {
    double rupees, pounds;
    const double EXCHANGE_RATE = 0.0094; // 1 rupee = 0.0094 pounds

    cout << "Enter the amount in rupees: ";
    cin >> rupees;

    pounds = rupees * EXCHANGE_RATE;

    cout << rupees << " rupees is equal to " << pounds << " pounds" << endl;

    return 0;
}
