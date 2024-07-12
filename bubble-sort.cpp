#include<iostream>
using namespace std;
void selectionsort(int arr[],int len){
for (int i=0;i<len-1;i++){
    int min_index=i;
    for (int j=i+1;j<len;j++){
        if(arr[j]<arr[min_index]){
            min_index=j;
        }
    }
    swap(arr[i],arr[min_index]);
}
for(int i=0;i<len;i++)
{
    cout<<arr[i]<<endl;
}
}
int main(){
    int arr[5]={1,4,6,2,6};
    selectionsort(arr,5);
    return 0;
}

