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
        string s;
        cin >> s;
        int c = 0;
        if (l < 3)
        {
            cout << c << endl;
            continue;
        }
        int i = 0;
        while (i < l)
        {
            string p = s.substr(i, 3);
            if (p == ("map") || p == ("pie"))
            {
                c++;
                i = i + 3;
                continue;
            }
            i++;
        }
        cout << c << endl;
    }
}