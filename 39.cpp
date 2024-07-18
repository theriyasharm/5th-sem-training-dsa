#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string> q;
    q.push("Ajay");
    q.push("Ajab");
    q.push("Gajab");
    q.push("Sajab");
    cout<<"Size:"<<q.size()<<endl;
    cout<<" Front Element after dequeue:"<<q.front()<<endl;
     q.pop();
     cout<<"After pop:"<<q.front()<<endl;
    return 0;
}


