#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    // Open a text file for writing
    ofstream outFile("example.txt", ios::app);

    // Check the file for errors
    if (!outFile) {
        cout << "Error: unable to open the file for writing." << endl;
        return 1;
    }

    // Append multiple lines to the file
    outFile << "subash 40" << endl;
    outFile << "Maya 50" << endl;
    outFile << "Rajesh 60" << endl;

    // Close the output file
    outFile.close();

    // Open the file for reading
    ifstream inFile("example.txt");

    // Check the file for errors
    if (!inFile) {
        cout << "Error: unable to open the file for reading." << endl;
        return 1;
    }

    string line;
    int totalVowels = 0, totalConsonants = 0;

    cout << "File contents:" << endl;

    // Read and process each line
    while (getline(inFile, line)) {
        cout << line << endl;

        for (char c : line) {
            if (isalpha(c)) {
                if (isVowel(c)) {
                    totalVowels++;
                } else {
                    totalConsonants++;
                }
            }
        }
    }

    // Close the input file
    inFile.close();

    // Display the counts
    cout << "\nTotal vowels: " << totalVowels << endl;
    cout << "Total consonants: " << totalConsonants << endl;

    return 0;
}
