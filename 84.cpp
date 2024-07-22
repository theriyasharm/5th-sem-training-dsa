#include <iostream>
using namespace std;

class Example {
    mutable int value;
public:
    Example(int val) : value(val) {}

    void modify() const {
        value++;
    }

    int getValue() const {
        return value;
    }
};

int main() {
    const Example obj(5);
    cout << "Initial value: " << obj.getValue() << endl;

    obj.modify();
    cout << "After modification: " << obj.getValue() << endl;

    return 0;
}
