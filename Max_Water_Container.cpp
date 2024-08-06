#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

const int MOD = 1000000007;
const int inf = 1e16;
const int maxn = 100005;

int maxArea(vector<int> &heights)
{
    int ma = 0;
    auto l = 0;
    auto r = heights.size() - 1;
    while (l < r)
    {
        int ar = min(heights[l], heights[r]) * (r - l);
        ma = max(ma, ar);
        if (heights[l] > heights[r])
        {
            r--;
        }
        else
        {
            l++;
        }
    }
    return ma;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> numbers;

    maxArea(numbers);
}