#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>

using namespace std;

const int MOD = 1000000007;
const int inf = 1e16;
const int maxn = 100005;
const int _0 = 0;

bool isValidSudoku(vector<vector<char>> &board)
{
    unordered_map<int, unordered_set<char>> col;
    unordered_map<int, unordered_set<char>> row;
    unordered_map<int, unordered_set<char>> dabba;

    for (int r = 0; r < 9; r++)
    {
        for (int c = 0; c < 9; c++)
        {
            if (board[r][c] == '.')
            {
                continue;
            }
            if (row[r].count(board[r][c]) > 1 || col[c].count(board[r][c]) || dabba[(r / 3) * 3 + (c / 3)].count(board[r][c]))
            {
                return false;
            }
            row[r].insert(board[r][c]);
            col[c].insert(board[r][c]);
            dabba[(r / 3) * 3 + (c / 3)].insert(board[r][c]);
        }
    }
    return true;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<vector<char>> board; // cin by user depeneding on the question

    isValidSudoku(board);
}