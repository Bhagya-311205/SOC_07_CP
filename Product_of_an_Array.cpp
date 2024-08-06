#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

const int MOD = 1000000007;
const int inf = 1e16;
const int maxn = 100005;
const int _0 = 0;

vector<int> productExceptSelf(vector<int> &nums)
{
    vector<int> p;
    for (int i = 0; i < nums.size(); i++)
    {
        vector<int> q(nums);
        q.erase(q.begin() + i);
        int prod = 1;
        for (int j = 0; j < q.size(); j++)
        {
            prod *= q[j];
        }
        p.push_back(prod);
    }
    return p;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> nums; // cin by user depeneding on the question

    productExceptSelf(nums);
}