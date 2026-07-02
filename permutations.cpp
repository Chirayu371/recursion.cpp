#include <bits/stdc++.h>
using namespace std;

void permutations(vector<int>& arr,
                  vector<int>& ans,
                  vector<bool>& visited)
{
    if(arr.size() == ans.size())
    {
        for(int x : ans)
            cout << x << " ";

        cout << endl;
        return;
    }

    for(int i = 0; i < arr.size(); i++)
    {
        if(visited[i])
            continue;

        ans.push_back(arr[i]);
        visited[i] = true;

        permutations(arr, ans, visited);

        // Backtracking
        ans.pop_back();
        visited[i] = false;
    }
}

int main()
{
    vector<int> arr = {1,2,3};
    vector<int> ans;
    vector<bool> visited(3,false);

    permutations(arr, ans, visited);
}