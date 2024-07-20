#include <iostream>

int main() {
    const char* str = "j2hon122Doe114@gmail.com88";
    int count[10] = {0}; // Array to store count of digits 0-9

    // Count occurrences of each digit
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            count[str[i] - '0']++;
        }
    }

    // Print duplicates
    for (int i = 0; i < 10; i++) {
        if (count[i] > 1) {
            std::cout << i << " - number " << count[i] << " times" << std::endl;
        }
    }

    return 0;
}
