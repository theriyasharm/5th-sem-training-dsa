#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> numbers={1,2,3,4,5,6,1};
    cout<<"Initial list: ";
    for (int number:numbers){
        cout<<number<<", ";
    }
    // Remove the element of the value 1.
    numbers.remove(1);
    cout<<endl<<"Final List: ";
    for (int number:numbers){
        cout<<number<<", ";
    }
    return 0;
}
