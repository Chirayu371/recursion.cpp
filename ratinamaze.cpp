#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>>& board, int row, int col,
           vector<string>& ans, string path)
{
    int n = board.size();

    // Base Case
    if (row == n - 1 && col == n - 1)
    {
        ans.push_back(path);
        return;
    }

    // Mark current cell as visited
    board[row][col] = 0;

    // Down
    if (row + 1 < n && board[row + 1][col] == 1)
    {
        solve(board, row + 1, col, ans, path + "D");
    }

    // Up
    if (row - 1 >= 0 && board[row - 1][col] == 1)
    {
        solve(board, row - 1, col, ans, path + "U");
    }

    // Right
    if (col + 1 < n && board[row][col + 1] == 1)
    {
        solve(board, row, col + 1, ans, path + "R");
    }

    // Left
    if (col - 1 >= 0 && board[row][col - 1] == 1)
    {
        solve(board, row, col - 1, ans, path + "L");
    }

    // Backtracking
    board[row][col] = 1;
}

int main()
{
    vector<vector<int>> board = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };

    vector<string> ans;

    if (board[0][0] == 1)
    {
        solve(board, 0, 0, ans, "");
    }

    for (string s : ans)
    {
        cout << s << endl;
    }

    return 0;
}