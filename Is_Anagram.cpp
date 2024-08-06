#include <iostream>
#include <vector>
#include <stdlib.h>
#include <algorithm>
using namespace std;

const int MOD = 1000000007;
const int inf = 1e16;
const int maxn = 100005;
const int _0 = 0;

bool isAnagram(string s, string t)
{
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if (s == t)
    {
        return true;
    }
    return false;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s, t; // cin by user depeneding on the question

    isAnagram(s, t);
}