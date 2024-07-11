#include <iostream>
using namespace std;
int main(){for(int i=1;i<=5;i++)//Prints a stair format star pattern which goes from 1 to 5 star
{
{
for (int j=1;j<=5;j++) //use if (i<=j) for top-right triangle which grows from 5 to 1 star.
    {
if(i+j>5)
cout<<"*";
else{
cout<<" ";
}}
cout<<endl;}
return 0;}}
