#include<iostream>
using namespace std;
int main(){
    auto add=[](int a,int b){
        return a+b;
    };
    cout<<"Sum is: "<<add(3,6)<<endl;
}
