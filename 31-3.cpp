#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;

int main() {
    // First, write data to the file
    ofstream my_file("example.txt", ios::app);
    if(!my_file) {
        cout << "Error: unable to open the file for writing." << endl;
        return 1;
    }
    my_file << "Subash 40" << endl;
    my_file << "Maya 50" << endl;
    my_file << "Rajesh 60" << endl;
    my_file.close();

    // Now, read data from the file and calculate sum and average
    ifstream read_file("example.txt");
    if(!read_file) {
        cout << "Error: unable to open the file for reading." << endl;
        return 1;
    }

    string line;
    int sum = 0;
    int count = 0;

    while (getline(read_file, line)) {
        istringstream iss(line);
        string name;
        int mark;

        if (iss >> name >> mark) {
            sum += mark;
            count++;
        }
    }

    read_file.close();

    if (count > 0) {
        double average = static_cast<double>(sum) / count;
        cout << "Sum of marks: " << sum << endl;
        cout << "Average mark: " << average << endl;
    } else {
        cout << "No data found in the file." << endl;
    }

    return 0;
}
