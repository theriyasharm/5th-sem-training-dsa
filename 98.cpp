#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canAttendMeetings(vector<vector<int>>& intervals) {
    // Sort intervals based on start time
    sort(intervals.begin(), intervals.end(),
         [](const vector<int>& a, const vector<int>& b) {
             return a[0] < b[0];
         });

    // Check for any overlap
    for (int i = 1; i < intervals.size(); i++) {
        if (intervals[i][0] < intervals[i-1][1]) {
            return false;
        }
    }

    return true;
}

int main() {
    // Example 1
    vector<vector<int>> intervals1 = {{0,30}, {5,10}, {15,20}};
    cout << "Example 1: " << (canAttendMeetings(intervals1) ? "true" : "false") << endl;

    // Example 2
    vector<vector<int>> intervals2 = {{7,10}, {2,4}};
    cout << "Example 2: " << (canAttendMeetings(intervals2) ? "true" : "false") << endl;

    return 0;
}
