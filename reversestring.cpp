# include <bits/stdc++.h>
using namespace std;
string reverse(string s){
    if (s.length()==1){
        return s;
    }return reverse(s.substr(1))+s[0];
}
int main()
{string s="chirayu";
    cout<<reverse(s)<<endl;
 return 0;
}