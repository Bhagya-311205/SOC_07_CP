#include <bits/stdc++.h>
using namespace std;
#define int long long
int mod = 1000000007;
vector<int> setbits[100100];

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            while (k--)
            {
                int x;
                cin >> x;
                setbits[i].push_back(x);
                mp[x]++;
            }
        }
        bool ans = 0;
        for (int i = 0; i < n; i++)
        {
            bool flag = 0;
            for (int v : setbits[i])
            {
                if (mp[v] == 1)
                    flag = 1;
            }
            ans = ans | (!flag);
        }
        if (ans)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
        for (int i = 0; i < n; i++)
            setbits[i].clear();
    }
}