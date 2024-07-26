#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> numbers={1,2,3};
    cout<<"Initial list: ";
    for (int number:numbers){
        cout<<number<<", ";
    }
    if(numbers.empty()){
        numbers.push_front(0);
    }
    else {
        numbers.push_back(4);
    }
    cout<<endl<<"Final List: ";
    for (int number:numbers){
        cout<<number<<", ";
    }
    return 0;
}

