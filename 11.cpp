#include<iostream>
using namespace std;
int main() {
     int array[5]={10,20,30,40,50};

    // To find the sum of elements in an array
    int sum=0;
    for (auto x: array)
        sum+=x;
    cout<<"Sum is: "<<sum<<endl;



    // To find the minimum or maximum element in an array

    int max=-32678;
    for (auto temp: array)
    {
        if (temp>max) // use if (temp<min) then min = temp with min= INT64_MAX initial for minimum
        {
            max=temp;
        }
    }
    cout<<"Max element is: "<<max;

    return 0;
}
