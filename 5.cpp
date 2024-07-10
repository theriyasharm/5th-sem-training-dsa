#include<iostream>
using namespace std;
int main() {
    int apple_count(5);
    int orange_count(10);
    int fruit_count (apple_count + orange_count);

    //int bad_initialization ( doesnt_exist3 + doesnt_exist4 );

    //Information lost. less safe than braced initializers
    int narrowing_conversion_functional (2.9);

    cout << "Apple count : " << apple_count << endl;
    cout << "orange count : " << apple_count << endl;
    cout << "Fruit count : " << apple_count << endl;
    cout << "Narrowing conversion : " << narrowing_conversion_functional << endl;
    return 0;}

