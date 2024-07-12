#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "Hello, ";
    string str2 = "world!";
    string result;

    // 1. concatenate (using + operator)
    string combined = str1 + str2;
    cout << "Concatenated string: " << combined << endl;

    // 2. length
    cout << "Length of combined string: " << combined.length() << endl;

    // 3. find
    size_t found = combined.find("world");
    if (found != string::npos) {
        cout << "Substring 'world' found at position: " << found << endl;
    }

    // 4. replace
    combined.replace(found, 5, "everyone");
    cout << "After replace: " << combined << endl;

    // 5. copy (using string constructor)
    string copied(combined);
    cout << "Copied string: " << copied << endl;

    return 0;
}
