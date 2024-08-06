#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l;
        cin >> l;
        vector<int> p;
        for (int i = 0; i < l; i++)
        {
            int a;
            cin >> a;
            p.push_back(a);
        }
        bool q = true;
        if (l > 2)
        {
            for (int i = 1; i < l - 1; i++)
            {
                if (p[i] > p[i - 1] && p[i] > p[i + 1])
                {
                    cout << "YES" << endl;
                    cout << i << " " << i + 1 << " " << i + 2 << endl;
                    q = false;
                    break;
                }
            }
        }
        if (q)
        {
            cout << "NO" << endl;
        }
    }
}