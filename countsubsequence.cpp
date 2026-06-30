# include <bits/stdc++.h>
using namespace std;
int countsubsequence(vector<int>&arr,vector<int>&ans,int target,int index){
    if (target==0){
        return 1;
    }if (target<1){
        return 0;
    
    
    }int count=0;
    for (int i=index;i<arr.size();i++){
        ans.push_back(arr[i]);
        count+=countsubsequence(arr,ans,target-arr[i],i+1);
        ans.pop_back();
    }return count;
}
int main(){
vector<int>arr={1,2,3};
vector<int>ans={};
int y=countsubsequence(arr,ans,3,0);
cout<<y<<endl;
 return 0;
}