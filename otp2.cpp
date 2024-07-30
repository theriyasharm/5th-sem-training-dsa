#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    int length=6;
    vector<char> string_word;
    for (char c='A';c<='P';++c) {
        string_word.push_back(c);
    }
    for (int i=1;i<=10;++i) {
        string_word.push_back('0'+i);
    }
    string otp;
    int string_word_size=string_word.size();
    srand(time(0));
    for (int i=0;i<length;++i) {
        otp+=string_word[rand()%string_word_size];
    }
    cout<<"OTP is: "<<otp<<endl;
    return 0;
}

