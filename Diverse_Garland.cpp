#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, r = 0;
    string s, t = "RGB";
    cin >> n >> s;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i + 1] == s[i])
        {
            r++;
            for (auto e : t)
            {
                if (e - s[i] && e - s[i + 2])
                {
                    s[i + 1] = e;
                }
            }
        }
    }
    cout << r << endl;
    cout << s;
}