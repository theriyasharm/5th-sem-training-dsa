#include <iostream>
using namespace std;

int main() {
    int arr[] = {44, 5, 67, 12, 89, 45};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 89;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            cout << "Element " << target << " found at index " << i << endl;
            return 0;
        }
    }

    cout << "Element " << target << " not found in the array" << endl;
    return 0;
}
