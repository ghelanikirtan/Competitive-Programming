// //? Turn it   https://www.codechef.com/LTIME94C/problems/NFS

#include<bits/stdc++.h>
#define lli long long int
#define ld long double
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    fastio

    int t;
    cin>>t;
    while(t--){

        lli u,v,a,s;
        cin>>u>>v>>a>>s;
        lli u2,v2;
        ld final_velo, given_velo; // in square form
        final_velo = (u*u) - (2*a*s);
        given_velo = (v*v);
        if(final_velo <= given_velo)
        cout<<"YES\n";
        else
        cout<<"NO\n";

    }
    return 0;
}
