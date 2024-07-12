#include<iostream>

using namespace std;

void selectionsort(int arr[],int len){

  for(int i=0;i<len;i++){

    int minindex=i;

    for(int j=i+1;j<len;j++){

      if(arr[j]<arr[minindex]){

        minindex=j;

      }

    }

    swap(arr[i],arr[minindex]);

  }

  for (int i=0;i<len;i++){

    cout<<arr[i]<<endl;

  }

}

void searching(int x,int len){

  int arr[6],i;

  cout<<"Enter element to search: ";

  cin>>x;

  for(int i=0;i<len;++i)

    if(arr[i]==x)

      break;

  if(i<len)

    cout<<"Element found at index: "<<i;

  else

    cout<<"Element not found: "<<endl;

}

int main()

{

  int arr[6]={44,5,67,12,89,45};

  selectionsort(arr,6);

  searching(12,6);

  return 0;

}
