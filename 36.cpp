#include <iostream>
#include <vector>
using namespace std;
int sumArray(const vector<int>& arr) {
    int sum = 0;
    for (int num : arr) {
        sum += num;
    }
    return sum;
}

int main() {
     vector<int> numbers = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

     cout << "Array elements: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    int total = sumArray(numbers);
    cout << "Sum of array elements: " << total << endl;

    return 0;
}
