#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int i, c = 0, e = 0, p = 0;
    for (i = 0; i < a.size(); i++)
    {
        p = (a[i] == '0') + (b[i] == '0');
        e += p;
        if (e >= 3)
        {
            c++;
            e -= 3;
        }
        else
        {
            e = p;
        }
    }
    cout << c;
}