#include <iostream>
#include <list>
#include <limits>

using namespace std;

int main() {
    // Create a list of integers
    list<int> numbers;
    int num, count;

    // Input the number of elements
    cout << "Enter the number of elements: ";
    cin >> count;

    // Input the elements
    cout << "Enter the elements:\n";
    for (int i = 0; i < count; i++) {
        cin >> num;
        numbers.push_back(num);
    }

    // Check if the list is empty
    if (numbers.empty()) {
        cout << "The list is empty." << endl;
        return 0;
    }

    // Find the maximum element
    int max_element = numeric_limits<int>::min();
    for (int num : numbers) {
        if (num > max_element) {
            max_element = num;
        }
    }

    // Display the original list
    cout << "The list contains: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Display the maximum element
    cout << "The maximum element is: " << max_element << endl;

    return 0;
}
