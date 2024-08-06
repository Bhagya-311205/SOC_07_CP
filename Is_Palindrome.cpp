#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string>
#include <algorithm>
#include <map>
#include <unordered_set>

using namespace std;

const int MOD = 1000000007;
const int inf = 1e16;
const int maxn = 100005;
const int _0 = 0;

bool isPalindrome(string s)
{
    int l = 0;
    int r = s.size() - 1;

    while (l < r)
    {
        while (!isalnum(s[l]) && l < r)
        {
            l++;
        }
        while (!isalnum(s[r]) && l < r)
        {
            r--;
        }
        if (tolower(s[l]) != tolower(s[r]))
        {
            return false;
        }
        l++;
        r--;
    }
    return true;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s; // cin by user depeneding on the question

    isPalindrome(s);
}