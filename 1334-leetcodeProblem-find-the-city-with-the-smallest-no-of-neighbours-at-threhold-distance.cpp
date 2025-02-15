#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        // Initialize distance matrix with max value
        vector<vector<int>> dist(n, vector<int>(n, INT_MAX));

        // Set diagonal elements to 0
        for (int i = 0; i < n; i++) {
            dist[i][i] = 0;
        }

        // Fill in the known distances from edges
        for (const auto& edge : edges) {
            int from = edge[0], to = edge[1], weight = edge[2];
            dist[from][to] = dist[to][from] = weight;
        }

        // Floyd-Warshall algorithm
        for (int k = 0; k < n; k++) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (dist[i][k] != INT_MAX && dist[k][j] != INT_MAX &&
                        dist[i][k] + dist[k][j] < dist[i][j]) {
                        dist[i][j] = dist[i][k] + dist[k][j];
                    }
                }
            }
        }

        int minReachableCities = n;
        int resultCity = -1;

        // Count reachable cities for each city
        for (int i = 0; i < n; i++) {
            int reachableCities = 0;
            for (int j = 0; j < n; j++) {
                if (i != j && dist[i][j] <= distanceThreshold) {
                    reachableCities++;
                }
            }

            if (reachableCities <= minReachableCities) {
                minReachableCities = reachableCities;
                resultCity = i;
            }
        }

        return resultCity;
    }
};

#include <vector>
#include <climits>
#include <algorithm>
#include <iostream>  // Add this for cout

using namespace std;

// ... [Keep the Solution class as it is] ...

// Main function for testing
int main() {
    Solution solution;

    // Test case 1
    int n1 = 4;
    vector<vector<int>> edges1 = {{0,1,3},{1,2,1},{1,3,4},{2,3,1}};
    int distanceThreshold1 = 4;
    int result1 = solution.findTheCity(n1, edges1, distanceThreshold1);
    cout << "Test case 1 result: " << result1 << endl;

    // Test case 2
    int n2 = 5;
    vector<vector<int>> edges2 = {{0,1,2},{0,4,8},{1,2,3},{1,4,2},{2,3,1},{3,4,1}};
    int distanceThreshold2 = 2;
    int result2 = solution.findTheCity(n2, edges2, distanceThreshold2);
    cout << "Test case 2 result: " << result2 << endl;

    return 0;
}
