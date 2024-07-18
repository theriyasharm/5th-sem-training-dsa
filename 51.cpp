#include<iostream>
using namespace std;
int main(){
    const char* message {"Hello World!"};
    cout<< "message : "<< message <<endl; //Hello World!
    //*message ="B"; //compiler error
    cout<< "message : "<< *message <<endl;
    char message1[] {"Hello World!"};
    message1[0] ='B';
    cout<<"message1 : "<<message1 <<endl;
    return 0;}
