//?  A. Way Too Long Words    https://codeforces.com/problemset/problem/71/A  

#include <bits/stdc++.h>
#define lli long long int
#define ld long double
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    fastio

    lli t;
    cin>>t;
    while(t--){

        string s;
        cin>>s;
        if(s.length()>10)
            cout<<s[0]<<s.length()-2<<s[s.length()-1]<<"\n";
        else cout<<s<<"\n";
    }
    return 0;
}
