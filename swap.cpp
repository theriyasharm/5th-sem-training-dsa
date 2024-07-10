#include<iostream>
using namespace std;
int main(){
    //compile time error
    cout << "Hello world" << var << endl;

    //Run time error
    int value =7/0;
    cout << "value : " << value << endl;
    return 0;
}
