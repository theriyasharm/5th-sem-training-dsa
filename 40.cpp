#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("Ajay");
    s.push("Ajab");
    s.push("gajab");
    s.push("sajab");

    cout<<"Top element "<<s.top()<<endl;
    s.pop();
    cout<<"element after pop "<<s.top()<<endl;
    }
