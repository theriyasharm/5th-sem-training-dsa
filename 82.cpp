#include <iostream>
using namespace std;

void example() {
    register int counter = 0;
    for (register int i = 0; i < 10; ++i) {
        counter += i;
        cout << "counter = " << counter << endl;
    }
}

int main() {
    example();
    return 0;
}
