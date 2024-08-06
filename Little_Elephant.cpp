#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y1, y2, y3, y4, y5, y6, y7, y8, y9;
    cin >> y1 >> y2 >> y3 >> y4 >> y5 >> y6 >> y7 >> y8 >> y9;
    int sum = y2 + y6 + y3 + y4 + y7 + y8;

    y1 = (sum / 2) - y2 - y3;
    y5 = (sum / 2) - y6 - y4;
    y9 = (sum / 2) - y7 - y8;

    cout << y1 << " " << y2 << " " << y3 << endl;
    cout << y4 << " " << y5 << " " << y6 << endl;
    cout << y7 << " " << y8 << " " << y9;
}