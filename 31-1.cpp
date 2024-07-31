#include<iostream>
#include<fstream>
using namespace std;
int main(){
    /*opening a text file for writing.you can use open() to open file.
    //ofstream my_file.open("example.txt");
    ofstream my_file("example.txt");
    //close the file
    my_file.close();//
    return 0;}

//check the file for errors
//In file handling, it's important to ensure the file was opened without any error before we can perform any further operations on it.
//there are three common ways to check files for errors:

//1. By checking the file
ofstream my_file("example.txt");

//check if the file has been opened properly
if (!my_file){
    //print error message
    cout<<"Error opening the file." <<endl;
    //terminate the main() function
    return 1;

    //2.by using is.open() funtion
    ofstream my_file("example.txt");
    if (!my_file.is_open()) {
        cout<<"Error opening the file."<<endl;
        return 1;
    }*/
    ofstream my_file("example.txt");
    if(my_file.fail()){
        cout<<"Error opening the file."<<endl;
        return 1;
    }
}
