#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long mod = 1e9 + 7;

int main()
{
    int n;
    cin >> n;
    long long arr[n];
    for (long long i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        arr[i] = x;
        if (x >= 2048)
        {
            cout << 0;
            return 0;
        }
    }
    long long prod = 1;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            long long p = (arr[i] % arr[j]) % (mod);
            prod = (prod * p) % (mod);
        }
    }
    cout << prod;
    return 0;
}