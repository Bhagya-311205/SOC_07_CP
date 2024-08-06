#include <iostream>
#include <vector>
#include <stdlib.h>
#include <algorithm>
#include <map>

using namespace std;

const int MOD = 1000000007;
const int inf = 1e16;
const int maxn = 100005;
const int _0 = 0;

vector<int> topKFrequent(vector<int> &nums, int k)
{
    map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        if (mp[nums[i]] == 0)
        {
            mp[nums[i]] = 1;
        }
        else
        {
            mp[nums[i]] += 1;
        }
    }
    multimap<int, int> mm;

    for (auto const &kv : mp)
        mm.insert(make_pair(kv.second, kv.first));

    vector<int> ans;
    while (k--)
    {
        auto lp = prev(mm.end());
        ans.push_back(lp->second);
        mm.erase(lp);
    }
    return ans;
};

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> nums;
    int k; // cin by user depeneding on the question

    topKFrequent(nums, k);
}