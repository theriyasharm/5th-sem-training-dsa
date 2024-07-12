#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[minIdx]) minIdx = j;
        if (minIdx != i) swap(arr[i], arr[minIdx]);
    }
}

int main() {
    int arr[] = {44, 5, 67, 12, 89, 45};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 89;

    cout << "Original array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    selectionSort(arr, n);

    cout << "Sorted array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            cout << "Element " << target << " found at index " << i << " in the sorted array." << endl;
            return 0;
        }
    }
    cout << "Element " << target << " not found in the array." << endl;

    return 0;
}
