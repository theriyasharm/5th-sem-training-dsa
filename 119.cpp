#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> numbers={1,2,3,4};
    list<int>::iterator itr =  numbers.begin();
    ++itr;
    cout<<"List Elements: ";
    for (int number:numbers){
        cout<<number<<", ";
    }
    numbers.push_front(0);
    numbers.push_back(5);
    cout<<endl<<"Final List: ";
    for (int number:numbers){
    cout<<number<<", ";
}
// Add element to the list.
    numbers.push_front(0);
    numbers.push_back(5);
    cout<<endl<<"Final List: ";
    for (int number:numbers){
        cout<<number<<", ";
    }
// Access the element.
    cout<<"First Element: "<<numbers.front()<<endl;
    cout<<" Last Element: "<<numbers.back()<<endl;
    return 0;
}
