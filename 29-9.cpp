#include<bits/stdc++.h>
using namespace std;
class ListElement
{public:
    int data;
    ListElement* next;
    ListElement(int value)
    {data = value;
       next = nullptr;}};
void appendElement(ListElement* &start, int value){
    ListElement* newElement = new ListElement(value);
    if(start == nullptr){
        start = newElement;
        return;}
    ListElement* current = start;
    while(current->next != nullptr){
        current = current->next;}
    current->next = newElement;}
void showParityGroups(ListElement* start)
{ListElement* current = start;
    cout << "Even numbers: ";
    while(current != nullptr){
        if(current->data % 2 == 0){
            cout << current->data << " ";}
        current = current->next;}
    cout << endl;
    current = start;
    cout << "Odd numbers: ";
    while(current != nullptr){
        if(current->data % 2 != 0){
            cout << current->data << " ";}
        current = current->next;}
    cout << endl;}
int main(){
    ListElement* start = nullptr;
    vector<int> numberSet = {10, 13, 14, 16, 18, 20};
    for(int num : numberSet){
        appendElement(start, num);}
    showParityGroups(start);
    return 0;}
