#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int maxx = 1e3 + 100;
int a[maxx];
int b[maxx];
int ans[maxx];
int n, m;

int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (sum + a[i] <= m)
        {
            sum += a[i];
            ans[i] = 0;
            b[i] = a[i];
            continue;
        }
        sort(b + 1, b + i);
        int cnt = 0;
        int sum1 = 0;
        for (int j = i - 1; j >= 1; j--)
        {
            sum1 += b[j];
            cnt++;
            if (a[i] + sum - sum1 <= m)
            {
                ans[i] = cnt;
                break;
            }
        }
        b[i] = a[i];
        sum += a[i];
    }
    for (int i = 1; i <= n; i++)
        cout << ans[i] << " ";
    cout << endl;
}