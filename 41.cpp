#include<iostream>
#include<queue>
using namespace std;

int main() {
    queue<string> q;
    q.push("abha");
    q.push("sabha");
    q.push("mabha");

    // Get the initial size of the queue
    int size = q.size();

    // Iterate through the queue using a for loop
    for (int i = 0; i < size; i++) {
        // Display the front element
        cout << "Front element: " << q.front() << endl;

        // Remove the front element
        q.pop();
    }

    return 0;
}
