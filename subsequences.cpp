# include <bits/stdc++.h>
using namespace std;
void subsequences(vector<int>&arr,vector<int>&ans,int i){
    for (int x:ans){
        cout<<x<<" ";
    }cout<<endl;
    for (int j=i;j<arr.size();j++){
        ans.push_back(arr[j]);
        subsequences(arr,ans,j+1);
        ans.pop_back();
    }
}
int main()
{vector<int>arr={1,2,3};
vector<int>ans={};
subsequences(arr,ans,0);
 return 0;
}