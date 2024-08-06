#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string>
#include <algorithm>
#include <map>
#include <unordered_set>

using namespace std;

const int MOD = 1000000007;
const int inf = 1e16;
const int maxn = 100005;
const int _0 = 0;

int longestConsecutive(vector<int> &nums)
{
    unordered_set<int> numSet(nums.begin(), nums.end());
    int longest = 0;

    for (int n : numSet)
    {
        if (numSet.find(n - 1) == numSet.end())
        {
            int length = 1;
            while (numSet.find(n + length) != numSet.end())
            {
                length++;
            }
            longest = max(length, longest);
        }
    }
    return longest;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> nums; // cin by user depeneding on the question

    longestConsecutive(nums);
}