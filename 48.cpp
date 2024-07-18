#include <iostream>
#include <list>
#include <string>

class ListItem {
public:
    ListItem(int value) : intValue(value), isInt(true) {}
    ListItem(const std::string& value) : stringValue(value), isInt(false) {}

    void print() const {
        if (isInt) {
            std::cout << intValue << std::endl;
        } else {
            std::cout << stringValue << std::endl;
        }
    }

private:
    int intValue;
    std::string stringValue;
    bool isInt;
};

int main() {
    std::list<ListItem> myList;

    // Add elements, including duplicates
    myList.push_back(ListItem(42));
    myList.push_back(ListItem("Hello"));
    myList.push_back(ListItem(42));  // Duplicate integer
    myList.push_back(ListItem("Hello"));  // Duplicate string
    myList.push_back(ListItem(100));

    // Print the contents of the list
    for (const auto& item : myList) {
        item.print();
    }

    return 0;
}
