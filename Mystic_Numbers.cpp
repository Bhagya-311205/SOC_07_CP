#include <bits/stdc++.h>
using namespace std;

int a[1005];
int b[1005];

void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
            continue;
        if (i + 1 < n)
            swap(b[i], b[i + 1]);
        else if (i - 1 > 0)
            swap(b[i], b[i - 1]);
        else
        {
            cout << -1 << endl;
            return;
        }
    }
    for (int i = 0; i < n; i++)
        cout << b[i] << " ";
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
}