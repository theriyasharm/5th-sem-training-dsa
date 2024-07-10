#include <iostream>
using namespace std;

void add(int a, int b) {
    cout << "Sum: " << a + b << endl;
}

void subtract(int a, int b) {
    cout << "Difference: " << a - b << endl;
}

void multiply(int a, int b) {
    cout << "Product: " << a * b << endl;
}

void divide(int a, int b) {
    if (b != 0) {
        cout << "Quotient: " << static_cast<double>(a) / b << endl;
    } else {
        cout << "Error: Division by zero" << endl;
    }
}

void remainder(int a, int b) {
    if (b != 0) {
        cout << "Remainder: " << a % b << endl;
    } else {
        cout << "Error: Division by zero" << endl;
    }
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    add(num1, num2);
    subtract(num1, num2);
    multiply(num1, num2);
    divide(num1, num2);
    remainder(num1, num2);

    return 0;
}
