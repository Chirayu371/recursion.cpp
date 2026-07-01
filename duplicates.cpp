#include <bits/stdc++.h>
using namespace std;

void subsequences(vector<int>& arr, vector<int>& ans, int index)
{
    // Print current subsequence
    cout << "{ ";
    for (int x : ans)
        cout << x << " ";
    cout << "}" << endl;

    for (int i = index; i < arr.size(); i++)
    {
        ans.push_back(arr[i]);

        subsequences(arr, ans, i + 1);

        ans.pop_back();

        // Skip all duplicates of arr[i]
        while (i + 1 < arr.size() && arr[i] == arr[i + 1])
        {
            i++;
        }
    }
}

int main()
{
    vector<int> arr = {2, 2, 2};
    vector<int> ans;

    sort(arr.begin(), arr.end());

    subsequences(arr, ans, 0);

    return 0;
}