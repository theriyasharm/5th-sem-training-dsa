#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter an even number: ";
    cin >> number;

    switch (number % 2) {
        case 0:
            cout << "The upper nearest odd number is: " << number + 1 << endl;
            break;
        case 1:
            cout << "You entered an odd number: " << number << endl;
            break;
    }

    return 0;
}
