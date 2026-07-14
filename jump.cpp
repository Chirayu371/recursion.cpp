# include <bits/stdc++.h>
using namespace std;
bool jump(vector<int>&nums,int i){
    if (i>=nums.size()){
        return false;
    }if (i==nums.size()-1){
        return true;
    }
    for (int j=1;j<=arr[i];j++){
        if (jump(arr,i+j)){
            return true;
        }
    }return false;
}
int main()
{vector<int>nums={3,2,1,0,4};

 return 0;
}