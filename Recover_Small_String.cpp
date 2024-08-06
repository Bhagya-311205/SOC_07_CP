#include <iostream>
#include <vector>
#include <string>
using namespace std;

void small(vector<int> &p, int n)
{
    if (n == 3 && p.size() == 0)
    {
        for (int j = 0; j < 3; j++)
        {
            p.push_back(1);
        }
    }
    else if (n >= 2 && n <= 78)
    {
        if (p.size() == 2)
        {
            p.push_back(n);
        }
        else if (p.size() == 1)
        {
            for (int i = 1; i <= 26; i++)
            {
                if (n - i <= 26)
                {
                    p.push_back(i);
                    small(p, n - i);
                    break;
                }
            }
        }
        else if (p.size() == 0)
        {
            for (int i = 1; i <= 26; i++)
            {
                if (n - i <= 52)
                {
                    p.push_back(i);
                    small(p, n - i);
                    break;
                }
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vec;
        small(vec, n);

        for (int i = 1; i < 2; i++)
        {
            if (vec[i] < vec[i - 1])
            {
                int temp = vec[i];
                vec[i] = vec[i - 1];
                vec[i - 1] = temp;
            }
        }
        string a1 = "";
        for (int i = 0; i < 3; i++)
        {
            a1 += char(vec[i] + 96);
        }
        cout << a1 << endl;
    }
    return 0;
}