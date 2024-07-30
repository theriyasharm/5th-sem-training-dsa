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

    // Insert at head
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);

    cout << "After inserting at head: ";
    display(head);

    // Insert at last
    insertAtLast(head, 40);
    insertAtLast(head, 50);

    cout << "After inserting at last: ";
    display(head);

    return 0;
}
