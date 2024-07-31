#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    // Open a text file for writing
    ofstream my_file("example.txt", ios::app);

    // Check the file for errors
    if (!my_file) {
        cout << "Error: unable to open the file for writing." << endl;
        return 1;
    }

    // Append multiple lines to the file
    my_file << "subash 40" << endl;
    my_file << "Maya 50" << endl;
    my_file << "Rajesh 60" << endl;

    // Close the file
    my_file.close();

    // Open the file for reading
    ifstream read_file("example.txt");

    // Check the file for errors
    if (!read_file) {
        cout << "Error: unable to open the file for reading." << endl;
        return 1;
    }

    string line;
    unordered_map<char, int> char_count;

    // Read the file line by line
    while (getline(read_file, line)) {
        // Count occurrences of each character
        for (char c : line) {
            if (isalnum(c)) {  // Only count alphanumeric characters
                char_count[tolower(c)]++;
            }
        }
    }

    // Close the file
    read_file.close();

    // Display duplicate characters and their counts
    cout << "Duplicate characters and their counts:" << endl;
    for (const auto& pair : char_count) {
        if (pair.second > 1) {
            cout << "'" << pair.first << "': " << pair.second << " times" << endl;
        }
    }

    return 0;
}
