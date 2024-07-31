#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <map>
using namespace std;

int main() {
    // Open the file for reading
    ifstream file("example.txt");

    // Check if the file opened successfully
    if (!file) {
        cout << "Error: unable to open the file." << endl;
        return 1;
    }

    // Map to store word counts
    map<string, int> wordCount;

    string line;
    // Read the file line by line
    while (getline(file, line)) {
        istringstream iss(line);
        string word;

        // Process each word in the line
        while (iss >> word) {
            cout << word << " "; // Display the word
            wordCount[word]++; // Increment the count for this word
        }
        cout << endl; // New line after each line from the file
    }

    // Close the file
    file.close();

    // Display word counts
    cout << "\nWord counts:" << endl;
    for (const auto& pair : wordCount) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
