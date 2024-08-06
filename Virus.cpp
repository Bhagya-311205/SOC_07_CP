#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main()
{
    int ans = 0;
    int so = 0;
    stack<int> op;
    int len;
    cin >> len;
    for (int i = 0; i < len; i++)
    {
        int p;
        cin >> p;
        if (i == 0)
        {
            op.push(p);
            continue;
        }
        if (p > op.top())
        {
            so = 1;
        }
        else
        {
            int temp = 1;
            stack<int> ko;
            ko = op;
            while (p <= ko.top())
            {
                int kj = ko.top();
                ko.pop();
                if (ko.empty())
                {
                    temp = 0;
                    break;
                }
                if (kj > ko.top())
                {
                    if (ko.top() < p)
                    {
                        temp++;
                    }
                    continue;
                }
                else
                {
                    temp++;
                    continue;
                }
            }
            so = max(so, temp);
        }
        op.push(p);
        ans = max(ans, so);
    }
    cout << ans;
    return 0;
}