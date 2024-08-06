#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>

using namespace std;

const int MOD = 1000000007;
const int inf = 1e16;
const int maxn = 100005;

int characterReplacement(string s, int k)
{
    vector<int> count(26);
    int maxCount = 0;

    int i = 0;
    int j = 0;

    int result = 0;

    while (j < s.size())
    {
        count[s[j] - 'A']++;
        maxCount = max(maxCount, count[s[j] - 'A']);
        if (j - i + 1 - maxCount > k)
        {
            count[s[i] - 'A']--;
            i++;
        }
        result = max(result, j - i + 1);
        j++;
    }

    return result;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    int k;

    characterReplacement(s, k);
}