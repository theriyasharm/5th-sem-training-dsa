#include <iostream>
using namespace std;

int main() {
    int array[3*3] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int sum = 0;

    // Add elements of the first row
    for (int i = 0; i < 3; ++i) {
        sum += array[i];
    }

    cout << "Sum of the first row: " << sum << endl;

    return 0;
}
