#include <iostream>
#include <vector>

int main() {
    // Create a vector and add 4 elements
    std::vector<int> myVector = {10, 20, 30, 40};

    // Print the original vector
    std::cout << "Original vector: ";
    for (int num : myVector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Store the current size of the vector
    size_t originalSize = myVector.size();

    // Add a duplicate of the vector to itself
    myVector.insert(myVector.end(), myVector.begin(), myVector.end());

    // Print the vector after adding the duplicate
    std::cout << "Vector after adding duplicate: ";
    for (int num : myVector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Print the new size of the vector
    std::cout << "New size of vector: " << myVector.size() << std::endl;

    return 0;
}
