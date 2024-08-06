#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<char> ans;
    for (long unsigned int i = 0; i < s.size(); i++)
    {
        char p = s[i];
        if (p - '0' >= 0 && p - '0' <= 9)
        {
            ans.pop_back();
            continue;
        }
        ans.push_back(p);
    }
    for (long unsigned int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }
    return 0;
}