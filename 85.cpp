#include <iostream>
using namespace std;

int globalVar = 0; // Global variable definition

void incrementGlobal() {
    globalVar++;
}

int main() {
    cout << "Initial globalVar: " << globalVar << endl;

    incrementGlobal();
    cout << "After increment: " << globalVar << endl;

    return 0;
}
