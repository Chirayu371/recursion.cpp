// # include <bits/stdc++.h>
// using namespace std;
// int binarysearch(vector<int>&arr,int low,int high,int target){
//     int mid=low+(high-low)/2;
//     if (low>high){
//         return -1;
//     }if (arr[mid]==target){
//         return mid;
//     }else if (arr[mid]<target){
//         return binarysearch(arr,mid+1,high,target);
//     }else{
//         return binarysearch(arr,low,mid-1,target);
//     }

// }
// int main()
// {vector<int>arr={1,2,3,4,5,6,7,8,9,10};
// cout<<binarysearch(arr,0,9,3);
//  return 0;
// }
