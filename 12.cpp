#include <iostream>
using namespace std;
int main(){
    int array[5]={1,5,8,9,4};
    int user_input;
    cout<<"Enter the number you want to search in the array: ";
    cin>>user_input;
    int counter=0;
    for (auto x: array)
    {
        if (x==user_input){
            cout<<"Number "<<user_input<<" is found at the location: "<<counter;
            exit(0);
        }
        counter++;
    }
    cout<<"Not found!";

    return 0;
}
