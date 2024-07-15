#include <bits/stdc++.h>
using namespace std;
//using the sort() function
void Rearrangement(int arr[], int size){
   sort(arr, arr + size);
}
int main(){
   int arr[] = {3, 4, 7, 2, 7};
   int size = sizeof(arr)/sizeof(arr[0]);
   //calling the function to rearrange the array
   Rearrangement(arr, size);
   //print the array after rearranging the values
   cout<<"Rearrangement numbers using inbuilt sort function is: ";
   for(int i = 0; i < size; i++){
      cout<< arr[i] << " ";
   }
   return 0;
}
