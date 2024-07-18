#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);
    s.insert(0);

    for (auto i:s){
    cout<<i<<endl;}
    cout<<endl;

//for (int i = 0; i < s.size(); i++) {
        //cout << *next(s.begin(), i) << endl;
   // }


    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);
    for(auto i:s){
       cout<<i<<endl;
    } cout<<endl;
//find the element is present in set or not
cout<<"is present " <<s.count(7)<<endl;
set<int>::iterator itr= s.find(5);
for(auto it=itr;it!=s.end();it++){
    cout<<*it<<" ";

}cout<<endl;
}
