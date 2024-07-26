#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> numbers={1,2,3,4,5,6,1};
    list<int>::iterator itr=numbers.begin();
    cout<<"Initial list: ";
    for (int number:numbers){
        cout<<number<<", ";
    }
    // point iterator to the 4th element
    for (int i=0;i<3;i++){
        ++itr;
    }
    // remove the 4th element
    numbers.remove(*itr);
    cout<<endl<<"Final List: ";
    for (int number:numbers){
        cout<<number<<", ";
    }
    return 0;
}
