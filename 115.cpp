
//push_back- set the element in the list from back side.
//push_front- set the element in the list from front side.
//pop_front- remove the element in the list from front side.
//pop_back- remove the element in the list from back side.
//front- access the element from the front side.
//back- access the element from the back side.

/*
#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> numbers={1,2,3,4};
    cout<<"List Elements: ";
    for (int number:numbers){
        cout<<number<<", ";
    }
    numbers.push_front(0);
    numbers.push_back(4);
    cout<<endl<<"Final List: ";
    for (int number:numbers){
    cout<<number<<", ";
    }
    return 0;
}
*/

// Add element to the list.
/*
#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> numbers={1,2,3};
    cout<<"Initial list: ";
    for (int number:numbers){
        cout<<number<<", ";
    }
    numbers.push_front(0);
    numbers.push_back(4);
    cout<<endl<<"Final List: ";
    for (int number:numbers){
        cout<<number<<", ";
    }
    return 0;
}
*/


// Access the element.
#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> numbers={1,2,3,4,5};
    cout<<"First Element: "<<numbers.front()<<endl;
    cout<<"Last Element: "<<numbers.back();
    return 0;
}
