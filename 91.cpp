#include <iostream>
#include <vector>
using namespace std;

void rotateArray(vector<int>& arr) {
    int last = arr.back();
    for (int i = arr.size() - 1; i > 0; i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = last;
}

void printArray(const vector<int>& arr, int rotation) {
    cout << "Rotation " << rotation << ": ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = arr.size();

    cout << "Initial array: ";
    printArray(arr, 0);

    for (int i = 1; i <= size; i++) {
        rotateArray(arr);
        printArray(arr, i);
    }

    return 0;
}
