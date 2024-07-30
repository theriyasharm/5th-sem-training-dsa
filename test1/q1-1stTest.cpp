#include <iostream>

using namespace std;

int main() {

  // Declare and initialize an array

  int arr[] = {1, 2, 3, 4, 5};

  // Get the size of the array

  int size = sizeof(arr) / sizeof(arr[0]);

  // Display the array elements

  cout << "Array elements are: ";

  for (int i = 0; i < size; i++) {

    cout << arr[i] << " ";

  }

  cout << endl;

  return 0;

}
