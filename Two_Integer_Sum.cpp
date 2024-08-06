#include <iostream>
#include <vector>
#include <stdlib.h>
#include <algorithm>
using namespace std;

const int MOD = 1000000007;
const int inf = 1e16;
const int maxn = 100005;
const int _0 = 0;

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> p;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums.at(i) + nums.at(j) == target)
            {
                p.push_back(i);
                p.push_back(j);
                return p;
            }
            else
            {
                continue;
            }
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> nums;
    int target; // cin by user depeneding on the question

    twoSum(nums, target);
}