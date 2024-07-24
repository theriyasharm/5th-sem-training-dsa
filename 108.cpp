#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int i = 0, j = 0;
        long long sum = 0;
        while (j < mat[0].size())
        {
            sum += mat[i][j];
            i++;
            j++;
        }
        i--;
        j = 0;
        while (j < mat[0].size())
        {
            sum += mat[i][j];
            i--;
            j++;
        }
        i = (mat.size() - 1) / 2;
        j = i;
        if ((mat[0].size()) % 2 == 0)
            return sum;
        sum = sum - mat[i][j];
        return sum;
    }
};

int main() {
    // Example usage
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    Solution solution;
    int result = solution.diagonalSum(mat);

    cout << "Sum of diagonals: " << result << endl;

    return 0;
}
