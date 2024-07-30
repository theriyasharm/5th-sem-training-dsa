
#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> numbers={1,2,3,4,5};
    list<int> output;
    cout<<"List Elements: ";
    for (int number:numbers){
        cout<<number<<", ";
    }
    auto it=numbers.begin();
    advance(it,3);
    cout<<"\nFinal List: ";
    output.insert(output.end(),it,numbers.end());
    output.insert(output.end(),numbers.begin(),it);
    for (const auto &elem:output) {
        cout<<elem<<", ";
    }
    return 0;
}
