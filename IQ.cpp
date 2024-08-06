#include <bits/stdc++.h>
using namespace std;

string check(char ar[4][4], int i, int j)
{
    string p;
    if ((ar[i][j + 1] == ar[i + 1][j] && ar[i + 1][j] == ar[i + 1][j + 1]) || (ar[i][j + 1] == ar[i + 1][j] && ar[i + 1][j] == ar[i][j]) || (ar[i][j] == ar[i + 1][j] && ar[i + 1][j] == ar[i + 1][j + 1]) || (ar[i][j + 1] == ar[i][j] && ar[i][j] == ar[i + 1][j + 1]))
    {
        p = "YES";
    }
    else if ((ar[i][j - 1] == ar[i - 1][j] && ar[i - 1][j] == ar[i - 1][j - 1]) || (ar[i][j - 1] == ar[i - 1][j] && ar[i - 1][j] == ar[i][j]) || (ar[i][j] == ar[i - 1][j] && ar[i - 1][j] == ar[i - 1][j - 1]) || (ar[i][j - 1] == ar[i][j] && ar[i][j] == ar[i - 1][j - 1]))
    {
        p = "YES";
    }
    else if ((ar[i][j + 1] == ar[i - 1][j] && ar[i - 1][j] == ar[i - 1][j + 1]) || (ar[i][j + 1] == ar[i - 1][j] && ar[i - 1][j] == ar[i][j]) || (ar[i][j] == ar[i - 1][j] && ar[i - 1][j] == ar[i - 1][j + 1]) || (ar[i][j + 1] == ar[i][j] && ar[i][j] == ar[i - 1][j + 1]))
    {
        p = "YES";
    }
    else if ((ar[i][j - 1] == ar[i + 1][j] && ar[i + 1][j] == ar[i + 1][j - 1]) || (ar[i][j - 1] == ar[i + 1][j] && ar[i + 1][j] == ar[i][j]) || (ar[i][j] == ar[i + 1][j] && ar[i + 1][j] == ar[i + 1][j - 1]) || (ar[i][j - 1] == ar[i][j] && ar[i][j] == ar[i + 1][j - 1]))
    {
        p = "YES";
    }
    else
    {
        p = "NO";
    }
    return p;
}

int main()
{
    char p[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            char x;
            cin >> x;
            p[i][j] = x;
        }
    }
    string q;
    for (int i = 1; i < 3; i++)
    {
        for (int j = 1; j < 3; j++)
        {
            q = check(p, i, j);
            if (q == "YES")
            {
                break;
            }
        }
        if (q == "YES")
        {
            break;
        }
    }
    cout << q;
}