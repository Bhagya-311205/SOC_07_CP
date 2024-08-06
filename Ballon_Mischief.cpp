#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    vector<long long int> a(n, 0);
    map<long long int, long long int> mp;

    for (long long int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    long long int ans = 0;

    for (auto it : mp)
    {
        long long int t = it.second;
        ans += t * (t - 1) / 2;
    }

    for (long long int i = 0; i < n; i++)
    {

        long long int temp = ans;
        long long int t = mp[a[i]];
        temp -= t * (t - 1) / 2;
        t--;
        temp += t * (t - 1) / 2;
        cout << temp << endl;
    }

    return 0;
}