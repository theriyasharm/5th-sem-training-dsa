
#include <iostream>
using namespace std;

int count_of_consecutive_one(int arr[], int size){
    int count = 0;
    for(int i = 0; i < size - 1; i++){
        if(arr[i] == 1 && arr[i] == arr[i + 1]){
            count++;
        }
    }
    return count;
}

int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the elements of the array (0 or 1): ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int found = count_of_consecutive_one(arr, size);
    cout << "Number of consecutive ones: " << found << endl;

    return 0;
}
