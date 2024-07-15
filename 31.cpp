#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main() {
    array<int, 5> a = {3, 4, 3, 2, 3};

    int target = 3;
    int occurrences = count(a.begin(), a.end(), target);

    if (occurrences > 1) {
       cout << target << " occurs " << occurrences << " times." << endl;
    } else if (occurrences == 1) {
        cout << target << " occurs 1 time." << endl;
    } else {
        cout << target << " does not occur in the array." << endl;
    }

    return 0;
}
