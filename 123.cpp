#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printVector(const vector<int>& vec) {
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> vec1 = {5, 2, 8, 1, 9, 3, 7, 3, 8};
    vector<int> vec2 = {4, 6, 2, 10};

    int choice;

    do {
        cout << "\nChoose an operation:\n";
        cout << "1. Reverse\n2. Sort\n3. Unique\n4. Empty\n5. Size\n";
        cout << "6. Clear\n7. Merge\n8. Print\n9. Exit\n";
        cin >> choice;

        switch(choice) {
            case 1: // Reverse
                reverse(vec1.begin(), vec1.end());
                cout << "Reversed vector: ";
                printVector(vec1);
                break;

            case 2: // Sort
                sort(vec1.begin(), vec1.end());
                cout << "Sorted vector: ";
                printVector(vec1);
                break;

            case 3: // Unique
                sort(vec1.begin(), vec1.end());
                vec1.erase(unique(vec1.begin(), vec1.end()), vec1.end());
                cout << "Vector after removing duplicates: ";
                printVector(vec1);
                break;

            case 4: // Empty
                cout << "Is the vector empty? " << (vec1.empty() ? "Yes" : "No") << endl;
                break;

            case 5: // Size
                cout << "Size of the vector: " << vec1.size() << endl;
                break;

            case 6: // Clear
                vec1.clear();
                cout << "Vector cleared." << endl;
                break;

            case 7: // Merge
                merge(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), back_inserter(vec1));
                cout << "Merged vector: ";
                printVector(vec1);
                break;

            case 8: // Print
                cout << "Current vector: ";
                printVector(vec1);
                break;

            case 9: // Exit
                cout << "Exiting program." << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 0);

    return 0;
}
