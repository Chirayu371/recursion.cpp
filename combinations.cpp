# include <bits/stdc++.h>
using namespace std;
void combination1(vector<int>&arr,vector<int>&ans,int index,int target){
    if (target<0){
        return ;
    }if( target==0){
        for (int x:ans){
            cout<<x<<" ";
        }cout<<endl;
        return ;
    }for (int i=index;i<arr.size();i++){
        ans.push_back(arr[i]);
        combination1(arr,ans,i,target-arr[i]);
        ans.pop_back();
    }
}
int main()
{vector<int>arr={2,3,6,7};
vector<int>ans={};
combination1(arr,ans,0,7);
 return 0;
}