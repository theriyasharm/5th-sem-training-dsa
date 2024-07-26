#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> numbers={1,2,3};
    cout<<"Initial list: ";
    for (int number:numbers){
        cout<<number<<", ";
    }
    // create an iterator to point to the 1st position
    list<int>::iterator itr=numbers.begin();
    // increment to 3rd index
    ++itr;
    ++itr;
    // insert 0 at 3rd index
    numbers.insert(itr,0);
    cout<<endl<<"Final List: ";
    for (int number:numbers){
        cout<<number<<", ";
    }
    return 0;
}
