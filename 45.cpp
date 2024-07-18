#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {1, 2, 3, 4, 5};
    myList.push_back(6);
    myList.push_front(0);
    myList.pop_back();
    for (int num : myList)
        std::cout << num << " ";
    return 0;
}
