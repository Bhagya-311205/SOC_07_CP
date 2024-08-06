#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string>
#include <stack>

using namespace std;

const int MOD = 1000000007;
const int inf = 1e16;
const int maxn = 100005;

vector<int> dailyTemperatures(vector<int> &temperatures)
{
    vector<int> res(temperatures.size(), 0);
    stack<pair<int, int>> stack;

    for (int i = 0; i < temperatures.size(); i++)
    {
        int t = temperatures[i];
        while (!stack.empty() && t > stack.top().first)
        {
            auto pair = stack.top();
            stack.pop();
            res[pair.second] = i - pair.second;
        }
        stack.push({t, i});
    }
    return res;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> temperatures;

    dailyTemperatures(temperatures);
}