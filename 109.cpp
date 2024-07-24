#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int temp = mat.size();
        for(int i = 0; i < mat.size(); i++){
            for(int j = 0; j < mat.size(); j++){
                if(temp % 2 == 0){
                    if(i == j){
                        sum += mat[i][j];
                    }
                    if(i + j == temp - 1){
                        sum += mat[i][j];
                    }
                }
                else{
                    if(i + j == temp - 1){
                        sum += mat[i][j];
                    }
                    if(i == j && i != temp / 2){
                        sum += mat[i][j];
                    }
                }
            }
        }
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
