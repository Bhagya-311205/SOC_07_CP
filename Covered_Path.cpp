#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, t, d, x = 0;
    cin >> a >> b >> t >> d;
    while (t--)
    {
        if (a <= b)
        {
            x += a, a += d;
        }
        else
        {
            x += b, b += d;
        }
    }
    cout << x;
}