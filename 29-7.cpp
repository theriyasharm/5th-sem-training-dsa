#include<iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;
    Node(int data) {
        value = data;
        next = NULL;
    }
};

void insertAtHead(Node* &head, int value) {
    Node* new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}

void insertAtLast(Node* &head, int value) {
    Node* new_node = new Node(value);
    if (head == NULL) {
        head = new_node;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
}

void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->value << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;

    // Insert elements at the head
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);

    cout << "After inserting at head: ";
    display(head);

    // Insert element at the last
    insertAtLast(head, 40);

    cout << "After inserting 40 at last: ";
    display(head);

    // Insert another element at the head
    insertAtHead(head, 5);

    cout << "After inserting 5 at head: ";
    display(head);

    return 0;
}
