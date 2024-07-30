#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

string generateOTP(int length) {
    const string letters = "abcdefghijklmnop";
    const string numbers = "12345678910";
    string otp;

    srand(time(0)); // Seed the random number generator

    for (int i = 0; i < length; ++i) {
        if (rand() % 2 == 0) {
            // Add a random letter
            otp += letters[rand() % letters.length()];
        } else {
            // Add a random number
            otp += numbers[rand() % numbers.length()];
        }
    }

    return otp;
}

int main() {
    int otpLength;
    cout << "Enter the desired length of the OTP: ";
    cin >> otpLength;

    string otp = generateOTP(otpLength);
    cout << "Generated OTP: " << otp << endl;

    return 0;
}
