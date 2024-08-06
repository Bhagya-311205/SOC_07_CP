#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, q;
        cin >> k >> q;
        vector<int> nvale;
        vector<int> ko;
        vector<int> ans;
        for (int i = 0; i < k; i++)
        {
            int op;
            cin >> op;
            ko.push_back(op);
        }
        for (int i = 0; i < q; i++)
        {
            int n;
            cin >> n;
            nvale.push_back(n);
        }
        for (int j = 0; j < nvale.size(); j++)
        {
            int temp = nvale[j];
            if (temp < ko[0])
            {
                ans.push_back(temp);
            }
            else
            {
                ans.push_back(ko[0] - 1);
            }
        }
        for (int a = 0; a < ans.size(); a++)
        {
            cout << ans[a] << " ";
        }
        cout << endl;
    }
    return 0;
}