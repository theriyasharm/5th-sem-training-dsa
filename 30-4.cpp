#include<iostream>
#include<fstream>
using namespace std;
int main(){
    //open a text file for writing
     ifstream my_file("example.txt");
    //check the file for errors
    if(!my_file){
    cout<<"Error: unable to open the file."<<endl;
    return 1;
    }
    //write multiple lines to the file
    cout<<"Mohan 30" <<endl;
    cout<<"Moye Moye 40" <<endl;
    cout<<"jitu 50" <<endl;
    //close the file
    my_file.close();
    return 0;}
