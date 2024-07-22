#include <iostream>
using namespace std;

// External variable declaration
extern int globalVar;

// External variable definition
int globalVar = 0;

// Function declaration
void incrementGlobal();

// Function definition
void incrementGlobal() {
    globalVar++;
}

int main() {
    cout << "Initial globalVar: " << globalVar << endl;
    incrementGlobal();
    cout << "After increment: " << globalVar << endl;
    return 0;
}
