// # include <bits/stdc++.h>
// using namespace std;
// void bubblesort(vector<int>&arr){
//     int n=arr.size();
//     for (int i=0;i<n;i++){
//         for (int j=0;j<n-i-1;j++){
//             if (arr[j]<arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }

//         }
//     }
// }
// int main()
// {vector<int>arr={1,5,2,4,3,6,9,7,8};
// bubblesort(arr);
// for (int x:arr){
//     cout<<x<<" ";

// }
//  return 0;
// }
#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr, int n)
{
    // Base Case
    if (n == 1)
        return;

    // One pass of Bubble Sort
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    // Recursively sort the remaining n-1 elements
    bubbleSort(arr, n - 1);
}

int main()
{
    vector<int> arr = {5, 1, 4, 2, 8};

    bubbleSort(arr, arr.size());

    for (int x : arr)
        cout << x << " ";

    return 0;
}