#include <iostream>
#include <vector>

using namespace std;

int main() {
    int size;

    // Get the size of the matrices
    cout << "Enter the size of the matrices: ";
    cin >> size;

    // Declare vectors to store the matrices
    vector<int> matrix1(size);
    vector<int> matrix2(size);
    vector<int> result(size);

    // Input for first matrix
    cout << "Enter " << size << " elements for the first matrix: ";
    for (int i = 0; i < size; ++i) {
        cin >> matrix1[i];
    }

    // Input for second matrix
    cout << "Enter " << size << " elements for the second matrix: ";
    for (int i = 0; i < size; ++i) {
        cin >> matrix2[i];
    }

    // Perform addition
    for (int i = 0; i < size; ++i) {
        result[i] = matrix1[i] + matrix2[i];
    }

    // Display the result
    cout << "Result of matrix addition: ";
    for (int i = 0; i < size; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
