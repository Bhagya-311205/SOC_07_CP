#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string>
#include <algorithm>

using namespace std;

const int MOD = 1000000007;
const int inf = 1e16;
const int maxn = 100005;

int carFleet(int target, vector<int> &position, vector<int> &speed)
{
    int n = position.size();
    vector<pair<double, double>> pairs(n);
    for (int i = 0; i < n; i++)
    {
        pairs[i] = {position[i], speed[i]};
    }
    sort(pairs.begin(), pairs.end(), [](const pair<double, double> &a, const pair<double, double> &b)
         { return b.first < a.first; });

    int fleetCount = 0;
    vector<double> timeToReach(n);
    for (int i = 0; i < n; i++)
    {
        timeToReach[i] = (target - pairs[i].first) / pairs[i].second;
        if (i >= 1 && timeToReach[i] <= timeToReach[i - 1])
        {
            timeToReach[i] = timeToReach[i - 1];
        }
        else
        {
            fleetCount++;
        }
    }
    return fleetCount;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> position, speed;
    int target;

    carFleet(target, position, speed);
}