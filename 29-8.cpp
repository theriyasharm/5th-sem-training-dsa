#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node* next;
    Node(int data)
    {
       value = data;
       next = NULL;
    }
};

void insertAtTail(Node* &head, int value){
    Node* new_node = new Node(value);
    if(head == NULL){
        head = new_node;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new_node;
}

void displayEvenOdd(Node* head)
{
    Node* temp = head;
    cout << "Even elements: ";
    while(temp != NULL){
        if(temp->value % 2 == 0){
            cout << temp->value << " ";
        }
        temp = temp->next;
    }
    cout << endl;

    temp = head;
    cout << "Odd elements: ";
    while(temp != NULL){
        if(temp->value % 2 != 0){
            cout << temp->value << " ";
        }
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node* head = NULL;
    vector<int> elements = {10, 13, 14, 16, 18, 20};

    for(int element : elements){
        insertAtTail(head, element);
    }

    displayEvenOdd(head);

    return 0;
}
