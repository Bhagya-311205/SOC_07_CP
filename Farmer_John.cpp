#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;
        int a[n];
        if (k == 1)
        {
            for (int i = 0; i < n; i++)
            {
                a[i] = i + 1;
                cout << i + 1 << " ";
            }
            cout << endl;
        }
        else if (k == n)
        {
            for (int i = 0; i < n; i++)
            {
                a[i] = 1;
                cout << "1" << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
}