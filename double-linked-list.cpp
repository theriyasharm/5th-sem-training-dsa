#include <iostream>
#include <stdexcept>

using namespace std;

template <typename T>
class DoublyLinkedList {
private:
    // Node structure for the doubly linked list
    struct Node {
        T data;
        Node* prev;
        Node* next;
        Node(const T& value) : data(value), prev(nullptr), next(nullptr) {}
    };

    Node* head;    // Pointer to the first element
    Node* tail;    // Pointer to the last element
    size_t size;   // Number of elements in the list

public:
    // Constructor
    DoublyLinkedList() : head(nullptr), tail(nullptr), size(0) {}

    // Destructor
    ~DoublyLinkedList() {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    // Add an element to the end of the list
    void push_back(const T& value) {
        Node* newNode = new Node(value);
        if (empty()) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        size++;
    }

    // Add an element to the beginning of the list
    void push_front(const T& value) {
        Node* newNode = new Node(value);
        if (empty()) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        size++;
    }

    // Remove the first element
    void pop_front() {
        if (empty()) return;
        Node* temp = head;
        head = head->next;
        if (head) head->prev = nullptr;
        else tail = nullptr;
        delete temp;
        size--;
    }

    // Remove the last element
    void pop_back() {
        if (empty()) return;
        Node* temp = tail;
        tail = tail->prev;
        if (tail) tail->next = nullptr;
        else head = nullptr;
        delete temp;
        size--;
    }

    // Get the first element
    T& front() {
        if (empty()) throw runtime_error("List is empty");
        return head->data;
    }

    // Get the last element
    T& back() {
        if (empty()) throw runtime_error("List is empty");
        return tail->data;
    }

    // Check if the list is empty
    bool empty() const {
        return size == 0;
    }

    // Get the number of elements in the list
    size_t getSize() const {
        return size;
    }
};

int main() {
    DoublyLinkedList<int> list;

    // Add elements to the list
    list.push_back(1);
    list.push_back(2);
    list.push_front(0);

    // Display front and back elements
    cout << "Front: " << list.front() << endl;
    cout << "Back: " << list.back() << endl;

    // Remove elements from both ends
    list.pop_front();
    list.pop_back();

    // Display size and front element after removals
    cout << "Size: " << list.getSize() << endl;
    cout << "Front after pop: " << list.front() << endl;

    return 0;
}
