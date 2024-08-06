/* You are given an array of N integers denoting the postion of stalls and C 
aggresive cows. The objective is to place the cows in the stalls such that the 
minimum distance between any two cows is as large as possible. */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to check if it is possible to place cows with at least 'min_dist' distance apart
bool canPlaceCows(const vector<int>& stalls, int N, int C, int min_dist) {
    int count = 1;  // Place the first cow in the first stall
    int last_position = stalls[0];  // The position of the last placed cow
    
    for (int i = 1; i < N; ++i) {
        if (stalls[i] - last_position >= min_dist) {
            count++;
            last_position = stalls[i];
            if (count == C) {
                return true;  // All cows have been placed successfully
            }
        }
    }
    return false;  // Not all cows could be placed
}

// Function to find the largest minimum distance for placing cows
int aggressiveCows(vector<int>& stalls, int N, int C) {
    sort(stalls.begin(), stalls.end());  // Sort the stall positions

    int low = 1;  // Minimum possible distance
    int high = stalls[N - 1] - stalls[0];  // Maximum possible distance
    int best = 0;

    // Binary search on the distance
    while (low <= high) {
        int mid = (low + high) / 2;
        if (canPlaceCows(stalls, N, C, mid)) {
            best = mid;  // If it's possible, try for a larger distance
            low = mid + 1;
        } else {
            high = mid - 1;  // If it's not possible, try for a smaller distance
        }
    }

    return best;  // The largest minimum distance
}

int main() {
    vector<int> stalls = {1, 2, 4, 8, 9};  // Example stall positions
    int N = stalls.size();  // Number of stalls
    int C = 3;  // Number of cows

    cout << aggressiveCows(stalls, N, C) << endl;  // Output: 3
    return 0;
}