#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l {1,2,3,4,5};
    list<int>::iterator itr=l.begin();
    for(int i=2;i<l.size();i++)
    {
        ++itr;
        if(i==3)
        continue;
        cout<<"Elements are: "<<*itr<<endl;
    }
}
