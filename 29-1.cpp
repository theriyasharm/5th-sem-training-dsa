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
int main()
{
    Node* n1 = new Node(10);
    cout<<"Value: "<<n1->value<<" "<<"Address: "<<n1->next<<endl;
    return 0;
}
