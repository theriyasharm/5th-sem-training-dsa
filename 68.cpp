#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    int sum = 0;

    auto sumLambda = [&sum](int n) {
        sum += n;
    };

    for (int num : numbers) {
        sumLambda(num);
    }

    cout << "Sum: " << sum << endl;
    return 0;
}
