#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {5, 2, 4, 6, 1, 3};

    // Using std::stable_sort with lambda function for insertion sort
    stable_sort(arr.begin(), arr.end(), [](int a, int b) {
        return a < b;
    });

    // Printing the sorted array
    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}
