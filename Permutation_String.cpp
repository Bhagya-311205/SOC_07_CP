#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>

using namespace std;

const int MOD = 1000000007;
const int inf = 1e16;
const int maxn = 100005;

bool checkInclusion(string s1, string s2)
{
    if (s1.length() > s2.length())
    {
        return false;
    }
    vector<int> s_1(26);
    vector<int> s_2(26);
    int matches = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        s_1[s1[i] - 'a']++;
        s_2[s2[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (s_1[i] == s_2[i])
        {
            matches++;
        }
    }
    int l = 0;
    for (int r = s1.length(); r < s2.length(); r++)
    {
        if (matches == 26)
        {
            return true;
        }

        int index = s2[r] - 'a';
        s_2[index]++;
        if (s_1[index] == s_2[index])
        {
            matches++;
        }
        else if (s_1[index] + 1 == s_2[index])
        {
            matches--;
        }

        index = s2[l] - 'a';
        s_2[index]--;
        if (s_1[index] == s_2[index])
        {
            matches++;
        }
        else if (s_1[index] - 1 == s_2[index])
        {
            matches--;
        }
        l++;
    }
    return matches == 26;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s1, s2;

    checkInclusion(s1, s2);
}