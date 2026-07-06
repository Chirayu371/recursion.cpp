#include <bits/stdc++.h>
using namespace std;

// Check if substring is a palindrome
bool isPalindrome(string &s, int start, int end) {
    while (start < end) {
        if (s[start] != s[end])
            return false;
        start++;
        end--;
    }
    return true;
}

// Backtracking function
void solve(int index, string &s, vector<string> &path,
           vector<vector<string>> &ans) {

    // Base case
    if (index == s.size()) {
        ans.push_back(path);
        return;
    }

    // Try every possible substring starting from index
    for (int end = index; end < s.size(); end++) {

        if (isPalindrome(s, index, end)) {

            // Choose
            path.push_back(s.substr(index, end - index + 1));

            // Explore
            solve(end + 1, s, path, ans);

            // Backtrack
            path.pop_back();
        }
    }
}

int main() {

    string s;
    cin >> s;

    vector<vector<string>> ans;
    vector<string> path;

    solve(0, s, path, ans);

    cout << "Palindrome Partitions:\n";

    for (auto partition : ans) {
        for (auto str : partition) {
            cout << str << " ";
        }
        cout << endl;
    }

    return 0;
}