#include<iostream>
using namespace std;

class Node{
    public:
        int value;
        Node* next;
        Node(int data){
            value = data;
            next = NULL;
        }
};

void insertAtHead(Node* &head, int value){
    Node* new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}

void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->value << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main(){
    // Create the initial list with 20, 30, 40
    Node* head = new Node(40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);

    cout << "Initial list: ";
    display(head);

    // Insert 10 at the head
    insertAtHead(head, 10);

    cout << "List after inserting 10 at the head: ";
    display(head);

    return 0;
}
