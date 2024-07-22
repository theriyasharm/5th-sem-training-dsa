#include <iostream>
using namespace std;

void example() {
    static int count = 0;
    count++;
    cout << "Count: " << count << endl;
}

int main() {
    for (int i = 0; i < 5; i++) {
        example();
    }
    return 0;
}
