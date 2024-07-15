#include<iostream>
#include<array>
using namespace std;
int main (){

    //normal array
    //int a[]={};
    //stl array
    array<int,4> a={3,4,2,7};
    int size = a.size();
    cout<<size<<endl;
    for(int i=0;i<size;i++){
    cout<<a[i]<<endl;}
  cout << "Array elements:" << endl;
    for (auto it = a.begin(); it != a.end(); ++it) {
        cout << *it << endl;
    }
    cout << "Last element of the array (using back()): " << a.back() << endl;

    // Modifying the last element using back()
    a.back() = 10;

    cout << "Array after modifying the last element:" << endl;
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
