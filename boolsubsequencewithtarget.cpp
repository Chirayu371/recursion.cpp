# include <bits/stdc++.h>
using namespace std;
bool subsequence(vector<int>&arr,vector<int>&ans,int index,int target){
    for (int x:ans){
        cout<<x<<" ";
    }cout<<endl;
    
    if (target==0){
        return true;
    }if (target<0){
        return false;
    }
for (int i=index;i<arr.size();i++){
    ans.push_back(arr[i]);
    if (subsequence(arr,ans,i+1,target-arr[i])){
        return true;
    }
    ans.pop_back();
    




    /* code */
}
return false;}

int main()
{
 return 0;
}