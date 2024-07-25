#include <iostream>
#include <string>

class Solution {
public:
    std::string toLowerCase(std::string s) {
        for (char& c : s) {
            if (c >= 'A' && c <= 'Z') {
                c = c - 'A' + 'a';
            }
        }
        return s;
    }
};

int main() {
    Solution solution;

    // Test cases
    std::cout << solution.toLowerCase("Hello") << std::endl;
    std::cout << solution.toLowerCase("here") << std::endl;
    std::cout << solution.toLowerCase("LOVELY") << std::endl;

    return 0;
}
