#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;
    int size;

public:
    LinkedList() : head(nullptr), size(0) {}

    void addElement(int value, int position = 0) {
        if (isEmpty() || position <= 0) {
            addToFront(value);
        } else {
            addToPosition(value, position);
        }
    }

    void addToFront(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
        size++;
    }

    void addToPosition(int value, int position) {
        if (position > size) {
            position = size;
        }

        Node* newNode = new Node(value);

        if (position == 0) {
            newNode->next = head;
            head = newNode;
        } else {
            Node* current = head;
            for (int i = 0; i < position - 1; i++) {
                current = current->next;
            }
            newNode->next = current->next;
            current->next = newNode;
        }
        size++;
    }

    bool isEmpty() const {
        return head == nullptr;
    }

    void display() const {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    ~LinkedList() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    LinkedList list;

    // Adding to an empty list
    list.addElement(10);
    std::cout << "After adding 10 to empty list: ";
    list.display();

    // Adding to the front
    list.addElement(5, 0);
    std::cout << "After adding 5 to the front: ";
    list.display();

    // Adding to a specific position
    list.addElement(7, 1);
    std::cout << "After adding 7 at position 1: ";
    list.display();

    // Adding to the end (position > size)
    list.addElement(15, 10);
    std::cout << "After adding 15 at the end: ";
    list.display();

    return 0;
}
