//? Valid Pair   https://www.codechef.com/APRIL21C/problems/SOCKS1
#include<bits/stdc++.h>
#define lli long long int
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    //fastio

    //int t;
    //cin>>t;
    //while(t--){

        int a[3];
        cin>>a[0];
        cin>>a[1];
        cin>>a[2];
        sort(a, a+3);
        if(a[0] == a[1])
            cout<<"YES\n";
        else if(a[1] == a[2])
            cout<<"YES\n";
        else 
            cout<<"NO\n";

    //}
    return 0;
}