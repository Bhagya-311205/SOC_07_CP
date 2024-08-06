#include <iostream>
#include <vector>
#include <stdlib.h>
#include <algorithm>

using namespace std;

const int MOD = 1000000007;
const int inf = 1e16;
const int maxn = 100005;

vector<vector<int>> threeSum(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > 0)
            break;
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        int l = i + 1, r = nums.size() - 1;
        while (l < r)
        {
            int sum = nums[i] + nums[l] + nums[r];
            if (sum > 0)
            {
                r--;
            }
            else if (sum < 0)
            {
                l++;
            }
            else
            {
                ans.push_back({nums[i], nums[l], nums[r]});
                l++;
                r--;
                while (l < r && nums[l] == nums[l - 1])
                {
                    l++;
                }
            }
        }
    }
    return ans;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> numbers;

    threeSum(numbers);
}