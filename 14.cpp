#include <iostream>
using namespace std;
int main(){
    int a[5]={1,5,8,9,4};
    int value;
    cout<<"Enter the value which you want to check: ";
    cin>>value;
    int count=0;
    // Pick the first element of the pairs
    for (int i=0;i<5;i++){
        // Pick the second element of the pair along with a[i]
        for (int j=i+1;j<5;j++){
                // Pick the third element of the pair along with a[j]
            for (int k=j+1;k<5;k++){
                if (a[i]+a[j]+a[k]==value){
                count+=1;
            }
            }
        }
    }
    cout<<"The count of pairs "<<value<<" is: "<<count<<endl;
    return 0;
}

