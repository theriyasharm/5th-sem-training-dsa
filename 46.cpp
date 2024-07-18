#include <iostream>
#include <list>
#include <string>

int main() {
    std::list<std::variant<int, std::string>> myList;

    // Add elements, including duplicates
    myList.push_back(42);
    myList.push_back("Hello");
    myList.push_back(42);  // Duplicate integer
    myList.push_back("Hello");  // Duplicate string
    myList.push_back(100);

    // Print the contents of the list
    for (const auto& item : myList) {
        std::visit([](const auto& value) {
            std::cout << value << std::endl;
        }, item);
    }

    return 0;
}
