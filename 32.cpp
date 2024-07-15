#include<iostream>
#include<array>
using namespace std;
int main(){
    //int a[]={};
    array<int,5> a={3,4,7,2,7};
    int count=0;
    int found=7;
    for (int i=0;i<5;i++)
        {
        cout<<"Array is: "<<a[i]<<endl;
        if (a[i]==found)
        count++;
        }

    cout<<"7 is printed "<<count<<" times."<<endl;

    return 0;
}
