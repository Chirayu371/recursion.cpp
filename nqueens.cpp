#include <bits/stdc++.h>
using namespace std;

// Function to check if it is safe to place a queen
bool issafe(vector<string> &board, int row, int col, int n)
{
    // Check left side of the current row
    for (int j = col - 1; j >= 0; j--)
    {
        if (board[row][j] == 'Q')
            return false;
    }

    // Check upper-left diagonal
    int i = row - 1;
    int j = col - 1;

    while (i >= 0 && j >= 0)
    {
        if (board[i][j] == 'Q')
            return false;

        i--;
        j--;
    }

    // Check lower-left diagonal
    int k = row + 1;
    int h = col - 1;

    while (k < n && h >= 0)
    {
        if (board[k][h] == 'Q')
            return false;

        k++;
        h--;
    }

    return true;
}

// Recursive function
void solve(int col, vector<string> &board, vector<vector<string>> &ans, int n)
{
    // Base case
    if (col == n)
    {
        ans.push_back(board);
        return;
    }

    // Try placing queen in every row of this column
    for (int row = 0; row < n; row++)
    {
        if (issafe(board, row, col, n))
        {
            board[row][col] = 'Q';

            solve(col + 1, board, ans, n);

            // Backtrack
            board[row][col] = '.';
        }
    }
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<string> board(n, string(n, '.'));
    vector<vector<string>> ans;

    solve(0, board, ans, n);

    cout << "\nTotal Solutions = " << ans.size() << "\n";

    for (int k = 0; k < ans.size(); k++)
    {
        cout << "\nSolution " << k + 1 << ":\n";

        for (int i = 0; i < n; i++)
        {
            cout << ans[k][i] << endl;
        }
    }

    return 0;
}