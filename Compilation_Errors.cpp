#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<long long int> a;
    for (long long int i = 0; i < n; i++)
    {
        long long int x;
        cin >> x;
        a.push_back(x);
    }
    vector<long long int> b;
    for (long long int i = 0; i < n - 1; i++)
    {
        long long int x;
        cin >> x;
        b.push_back(x);
    }
    vector<long long int> c;
    for (long long int i = 0; i < n - 2; i++)
    {
        long long int x;
        cin >> x;
        c.push_back(x);
    }

    unordered_map<long long int, int> mp;

    for (int i = 0; i < n; i++)
    {
        long long int x = a[i];
        mp[x]++;
    }
    for (int i = 0; i < n - 1; i++)
    {
        long long int x = b[i];
        mp[x]++;
    }
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        int x = it->first;
        if ((it->second) % 2 != 0)
        {
            cout << x << endl;
        }
    }
    unordered_map<long long int, int> mr;
    for (int i = 0; i < n - 1; i++)
    {
        long long int x = b[i];
        mr[x]++;
    }
    for (int i = 0; i < n - 2; i++)
    {
        long long int x = c[i];
        mr[x]++;
    }
    for (auto it = mr.begin(); it != mr.end(); it++)
    {
        int x = it->first;
        if ((it->second) % 2 != 0)
        {
            cout << x << endl;
        }
    }
}