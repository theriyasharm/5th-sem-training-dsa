#include<iostream>
#include<fstream>
using namespace std;

int main() {
    // Opening a text file for writing
    ofstream my_file("example.txt");

    // Check if the file has been opened properly
    if (!my_file) {
        // Print error message
        cout << "Error opening the file." << endl;
        // Terminate the main() function
        return 1;
    }

    // If we reach here, the file was opened successfully
    cout << "File opened successfully." << endl;

    // Close the file
    my_file.close();

    return 0;
}
