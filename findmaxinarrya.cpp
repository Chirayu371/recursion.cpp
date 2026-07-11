// #include <bits/stdc++.h>
// using namespace std;

// void findMax(vector<int>& arr, int i, int &maxi) {
//     if (i == arr.size())
//         return;

//     // Current phase work
//     if (arr[i] > maxi)
//         maxi = arr[i];

//     findMax(arr, i + 1, maxi);
// }

// int main() {
//     vector<int> arr = {3, 8, 2, 10, 6};

//     int maxi = INT_MIN;
//     findMax(arr, 0, maxi);

//     cout << "Maximum = " << maxi;
// }

#include <bits/stdc++.h>
using namespace std;

int findmax(vector<int>& arr, int i)
{
    if(i == arr.size()-1)
        return arr[i];

    int maxi = findmax(arr, i+1);

    return max(arr[i], maxi);
}

int main()
{
    vector<int> arr = {1,2,35,6,7,0};

    cout << findmax(arr,0);
}