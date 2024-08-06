#include <iostream>
#include <cmath>
using namespace std;

long long hcf(long long a, long long b)
{
    while (b != 0)
    {
        long long t = b;
        b = a % b;
        a = t;
    }
    return a;
}

long long lcm(long long a, long long b)
{
    return (a * b) / hcf(a, b);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        if (a == 1)
        {
            cout << b * b << endl;
            continue;
        }
        else if (b % a != 0)
        {
            long long result = lcm(a, b);
            cout << result << endl;
        }
        else
        {
            cout << b * b / a << endl;
        }
    }
    return 0;
}