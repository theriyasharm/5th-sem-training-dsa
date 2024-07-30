#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node* next;//Pointer to next node

    Node(int data)
    {
       value = data;
       next = NULL;
    }
};
void insertAtHead(Node* &head,int value){
      Node* new_node=new Node(value);
      head=new_node;
      new_node->next=head;
      }
     void display(Node* head)
     {
         Node* temp=head;
         while(temp!=NULL){
                cout<<temp->value<<"->";
         temp=temp->next;
         }
         cout<<"Null"<<endl;
     }

int main()
{
    //Node* n1 = new Node(10);
    //cout<<"Value: "<<n1->value<<" "<<"Address: "<<n1->next<<endl;
    Node* head=NULL;
    insertAtHead(head,10);
    display(head);

    insertAtHead(head,20);
    display(head);
    return 0;
}
