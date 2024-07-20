// WAP to find the duplicate number from string.
#include<iostream>
using namespace std;
int main()
{
  string string;
  cin>>string;
  int count=0;
  for(char i: string)
  {
    if(i=='1'||i=='2'||i=='3'|i=='4'||i=='5'||i=='6'||i=='7'||i=='8'||i=='9'||i=='0')
    {
      count=0;
      char k;
      for(char j:string)
      {
        if(j==i)
        {
          k=j;
          count+=1;
        }
      }
        cout<<k<<" occurs "<<count<<" times"<<endl;
    }
  }
}
