#include <iostream>
#include <vector>
using namespace std;

long long int hero(vector<long long int> &o)
{
    long long int le = o.size();
    long long int lr = o[0];
    for (long long int i = 1; i < le; i++)
    {
        if (o[i] > lr)
        {
            lr = o[i];
        }
    }
    for (long long int i = 0; i < le; i++)
    {
        if (o[i] == lr)
        {
            o.erase(o.begin() + i);
            break;
        }
    }
    return lr;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int l;
        cin >> l;
        long long int sum = 0;
        vector<long long int> p;
        for (long long int i = 0; i < l; i++)
        {
            long long int x;
            cin >> x;
            if (p.size() == 0 && x == 0)
            {
                continue;
            }
            if (x == 0 && p.size() != 0)
            {
                p.push_back(x);
                sum += hero(p);
                continue;
            }
            p.push_back(x);
        }
        cout << sum << endl;
    }
}