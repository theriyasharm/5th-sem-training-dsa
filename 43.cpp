#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> s;
    int choice, element;

    while (true) {
        cout << "\n1. Size of the stack"
             << "\n2. Insert element into the stack"
             << "\n3. Delete element from the stack"
             << "\n4. Top element of the stack"
             << "\n5. Exit"
             << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Size of the stack: " << s.size() << endl;
                break;
            case 2:
                cout << "Enter element to insert: ";
                cin >> element;
                s.push(element);
                break;
            case 3:
                if (!s.empty()) {
                    s.pop();
                    cout << "Top element removed." << endl;
                } else {
                    cout << "Stack is empty." << endl;
                }
                break;
            case 4:
                if (!s.empty()) {
                    cout << "Top element: " << s.top() << endl;
                } else {
                    cout << "Stack is empty." << endl;
                }
                break;
            case 5:
                cout << "Exiting program." << endl;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
