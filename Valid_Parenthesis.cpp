#include <iostream>
#include <stack>
#include <stdlib.h>
#include <string>
#include <unordered_map>

using namespace std;

const int MOD = 1000000007;
const int inf = 1e16;
const int maxn = 100005;

bool isValid(string s)
{
    stack<char> open;
    unordered_map<char, char> parens = {
        {')', '('},
        {']', '['},
        {'}', '{'},
    };

    for (const auto &c : s)
    {
        if (parens.find(c) != parens.end())
        {
            if (open.empty())
            {
                return false;
            }

            if (open.top() != parens[c])
            {
                return false;
            }

            open.pop();
        }
        else
        {
            open.push(c);
        }
    }

    return open.empty();
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;

    isValid(s);
}