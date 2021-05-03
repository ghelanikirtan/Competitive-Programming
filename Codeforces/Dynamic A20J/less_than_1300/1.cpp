//?  A. Young Physicist  https://codeforces.com/problemset/problem/69/A#

#include <bits/stdc++.h>
#define lli long long int
#define ld long double
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    fastio

    lli t, sumx=0,sumy=0,sumz=0;
    cin>>t;
    while(t--){
        int x, y, z;
        cin>>x>>y>>z;
        sumx += x;
        sumy += y;
        sumz += z;
    }
    bool condi = ((sumx == 0)&&(sumy == 0)&&(sumz == 0));
    if(condi){
        cout<<"YES\n";
    }
    else cout<<"NO\n";


    return 0;
}