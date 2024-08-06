#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string op;
        cin >> op;
        stack<char> lp;
        lp.push(op[0]);
        for (int i = 1; i < op.size(); i++)
        {
            if (op[0] == ')')
            {
                break;
            }
            char c = op[i];
            if (c != '(')
            {
                if (!lp.empty())
                {
                    lp.pop();
                }
                else
                {
                    lp.push(c);
                }
            }
            else
            {
                lp.push(op[i]);
            }
        }
        if (lp.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}