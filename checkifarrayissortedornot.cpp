# include <bits/stdc++.h>
using namespace std;
bool checksort(vector<int>&arr,int i){
    if (i==arr.size()-1){
        return true;
    }if (arr[i]<=arr[i+1]){
        return checksort(arr,i+1);
    }if (arr[i]>arr[i+1]){
        return false;
    }
    }

int main()
{vector<int>arr={1,2,3,4,5};
cout<<checksort(arr,0);
 return 0;
}