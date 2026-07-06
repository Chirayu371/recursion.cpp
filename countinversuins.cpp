#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high, int &count) {
    int i = low;
    int j = mid + 1;
    vector<int> temp;

    while (i <= mid && j <= high) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            // All remaining elements in left half are greater than arr[j]
            // what he has done is here push and count in once in the merge function
            count += (mid - i + 1);
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= high) {
        temp.push_back(arr[j]);
        j++;
    }

    for (int k = low; k <= high; k++) {
        arr[k] = temp[k - low];
    }
}

void mergeSort(vector<int>& arr, int low, int high, int &count) {
    if (low >= high)
        return;

    int mid = low + (high - low) / 2;

    mergeSort(arr, low, mid, count);
    mergeSort(arr, mid + 1, high, count);

    merge(arr, low, mid, high, count);
}

int main() {
    vector<int> arr = {2, 4, 1, 3, 5};

    int count = 0;

    mergeSort(arr, 0, arr.size() - 1, count);

    cout << "Number of Inversions = " << count << endl;

    cout << "Sorted Array: ";
    for (int x : arr)
        cout << x << " ";

    return 0;
}