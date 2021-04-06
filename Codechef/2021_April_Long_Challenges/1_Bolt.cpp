//? World Record  https://www.codechef.com/APRIL21C/problems/BOLT

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

        double k1, k2, k3, v, final_v, final_time;
        double dist = 100, time = 9.58;
        cin>>k1>>k2>>k3>>v;
        final_v = k1*k2*k3*v;
        final_time = 100/final_v;
        final_time = floor((final_time*100)+0.5)/100;
        // cout<<final_v<<" ";
        // cout<<final_time<<" \n";
        if(final_time < time){
            cout<<"YES\n";
        }
        else
            cout<<"NO\n";

    }
    return 0;
}