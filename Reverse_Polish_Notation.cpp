#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string>
#include <stack>

using namespace std;

const int MOD = 1000000007;
const int inf = 1e16;
const int maxn = 100005;

int Ops(string op, int lhs, int rhs)
{
    int res;
    if (op == "+")
    {
        res = lhs + rhs;
    }
    else if (op == "-")
    {
        res = lhs - rhs;
    }
    else if (op == "*")
    {
        res = lhs * rhs;
    }
    else if (op == "/")
    {
        res = lhs / rhs;
    }
    return res;
}

int evalRPN(vector<string> &tokens)
{
    stack<int> no;

    for (int i = 0; i < tokens.size(); ++i)
    {
        string p = tokens[i];
        if (p != "+" && p != "-" && p != "*" && p != "/")
        {
            no.push(stoi(p));
        }
        else
        {
            int rhs = no.top();
            no.pop();
            int lhs = no.top();
            no.pop();
            int result = Ops(p, lhs, rhs);
            no.push(result);
        }
    }

    return no.top();
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<string> tokens;

    evalRPN(tokens);
}