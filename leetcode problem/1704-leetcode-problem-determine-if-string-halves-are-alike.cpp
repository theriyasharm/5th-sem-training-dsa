#include <iostream>
#include <string>
#include <unordered_set>

class Solution {
public:
    bool halvesAreAlike(std::string s) {
        std::unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int midpoint = s.length() / 2;
        int vowelCount1 = 0, vowelCount2 = 0;

        for (int i = 0; i < midpoint; i++) {
            if (vowels.count(s[i]) > 0) vowelCount1++;
            if (vowels.count(s[i + midpoint]) > 0) vowelCount2++;
        }

        return vowelCount1 == vowelCount2;
    }
};

int main() {
    Solution solution;

    // Test cases
    std::cout << (solution.halvesAreAlike("book") ? "true" : "false") << std::endl;
    std::cout << (solution.halvesAreAlike("textbook") ? "true" : "false") << std::endl;

    return 0;
}
