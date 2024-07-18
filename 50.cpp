#include<iostream>
#include<map>
//stored the data in key value pair
using namespace std;

int main(){
    map<int,string> m;
    m[1]="Ajay";
    m[2]="Nanjay";
    m[4]="Manjay";

    m.insert({5,"antika"});
    for(auto i:m){
    //expression cannot be used as a function.
    //i.first() dont writew this way
    cout<<i.first<<" "<<i.second<<" "<<endl;}
    cout<<"find the element"<<m.count(-13)<<endl;}

    m.erase(5);
    cout<<"after erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;}
    }
}
//find thye ement from map
auto findelement=m.find(4);
for(auto i=findelement;i!=m.end();i++){
    cout<<(*i).first<<" "<<(*i).}second<<endl;}}
