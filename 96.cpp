
#include<iostream>
#include"96(Demo).h"
using namespace std;
void Demo::input(){
cout<<"Enter the numbers: \n";
cin>>a>>b;
}
void Demo::show(){
cout<<"\n"<<a<<" "<<b;
}
int main(){
Demo obj;
obj.input();
obj.show();
return 0;
}
