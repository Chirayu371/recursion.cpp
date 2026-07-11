# include <bits/stdc++.h>
using namespace std;
int countdigits(int n){
    if (n<=0){
        return 0;
    }
    return 1+countdigits(n/10);
}
int main()
{cout<<countdigits(1234);
 return 0;
}