#include <iostream>
#include <vector>
#include <stdlib.h>
#include <algorithm>
using namespace std;

const int MOD = 1000000007;
const int inf = 1e16;
const int maxn = 100005;
const int _0 = 0;

bool hasDuplicate(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int count = distance(unique(nums.begin(), nums.end()), nums.end());
    if (count == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> p; // cin by user depeneding on the question

    hasDuplicate(p);
}