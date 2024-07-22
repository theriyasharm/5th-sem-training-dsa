#include <iostream>
#include <vector>
#include <algorithm>  // Added this for std::reverse
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;  // In case k > n

        // Reverse the entire array
        std::reverse(nums.begin(), nums.end());

        // Reverse the first k elements
        std::reverse(nums.begin(), nums.begin() + k);

        // Reverse the remaining n-k elements
        std::reverse(nums.begin() + k, nums.end());
    }

    void printArray(const vector<int>& nums) {
        for (int num : nums) {
            cout << num << " ";
        }
        cout << endl;
    }
};

int main() {
    Solution solution;

    // Example 1
    vector<int> nums1 = {1, 2, 3, 4, 5, 6, 7};
    int k1 = 3;
    cout << "Example 1 - Before rotation: ";
    solution.printArray(nums1);
    solution.rotate(nums1, k1);
    cout << "After rotation: ";
    solution.printArray(nums1);

    // Example 2
    vector<int> nums2 = {-1, -100, 3, 99};
    int k2 = 2;
    cout << "\nExample 2 - Before rotation: ";
    solution.printArray(nums2);
    solution.rotate(nums2, k2);
    cout << "After rotation: ";
    solution.printArray(nums2);

    return 0;
}
