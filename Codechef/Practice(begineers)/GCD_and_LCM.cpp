//! GCD and LCM  https://www.codechef.com/problems/FLOW016

#include<bits/stdc++.h>
#define lli long long int
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    //fastio

    //int t;
    //cin>>t;
    //while(t--){

        lli a,b;
        cin>>a>>b;
        lli x=0, y=0;
        vector<lli> vx,vy;
        while(x == y){
            x += a;
            vx.push_back(x);    
            y += b;
            vy.push_back(y);    

        }

    //}
    return 0;
}