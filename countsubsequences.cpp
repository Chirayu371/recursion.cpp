# include <bits/stdc++.h>
using namespace std;
int countsubsequences(vector<int>&arr,vector<int>&ans,int index,int target){
    if (target==0){
        return 1;
    }if (target<0){
        return 0;
    }if (index==arr.size()){
        return 0;
    }ans.push_back(arr[index]);
    int one=countsubsequences(arr,ans,index+1,target-arr[index]);
    ans.pop_back();
    int two=countsubsequences(arr,ans,index+1,target);
    return one+two;
}
int main()
{vector<int>arr={1,2,3};
vector<int>ans={};
int x=countsubsequences(arr,ans,0,3);
cout<<x<<endl;
 return 0;
}