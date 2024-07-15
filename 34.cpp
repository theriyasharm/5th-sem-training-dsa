#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<"Capacity ="<<v.capacity()<<endl;
    v.push_back(10);
    cout<<"Capacity ="<<v.capacity()<<endl;
    v.push_back(12);
    cout<<"Capacity ="<<v.capacity()<<endl;
    v.push_back(14);
    cout<<"Capacity ="<<v.capacity()<<endl;
    cout<<"size ="<<v.size()<<endl;
    cout<<"first element ="<<v.front()<<endl;
    cout<<"last element ="<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
        }cout<<endl;
        v.pop_back();
        cout<<"after pop ="<<endl;
        for(int i:v){
            cout<<"after pop ="<<endl;
            for(int i:v){
            cout<<i<<" ";
            }
            cout<<"before clear size="<<v.size()<<endl;
            v.clear();
            cout<<"after clear size="<<v.size()<<endl;

            //another way to create thee vector
            //vector<int> v(5,1);
            //means size is 5 and all five default value is 1
            //cout<<"print all element"<<endl;
            /* for(int i:v){
            cout<<i<<" ";}*/
            }
}
