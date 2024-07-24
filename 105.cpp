#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Get array dimensions from user
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    // Declare a 2D array with user-specified dimensions
    int** arr = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        arr[i] = new int[cols];
    }

    // Get array elements from user
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    // Print the array
    cout << "The array you entered is:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Calculate and print the sum of the first row
    int sum_first_row = 0;
    for (int j = 0; j < cols; ++j) {
        sum_first_row += arr[0][j];
    }
    cout << "Sum of the first row: " << sum_first_row << endl;

    // Free the dynamically allocated memory
    for (int i = 0; i < rows; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
