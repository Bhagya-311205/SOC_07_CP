
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            cout << "No" << endl;
            continue;
        }

        vector<pair<int, int>> ans;
        int l = n, r = n + 1, c = 0;
        bool on = false;
        while (true)
        {
            auto x = make_pair(l, r);
            ans.push_back(x);
            c++;
            if (c == n)
            {
                break;
            }
            if (l == 1)
            {
                l++;
                r = 2 * n;
            }
            else if (r == (2 * n))
            {
                on = true;
                r--;
                l = l + 2;
            }
            else
            {
                if (!on)
                {
                    l = l - 2;
                    r = r + 1;
                }
                else
                {
                    r--;
                    l = l + 2;
                }
            }
        }
        sort(ans.begin(), ans.end());
        cout << "Yes" << endl;
        for (auto it : ans)
        {
            cout << it.first << " " << it.second << endl;
        }
    }
}
