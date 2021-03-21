//? Weight Balance   https://www.codechef.com/COOK127C/problems/WEIGHTBL

#include<bits/stdc++.h>
#define lli long long int
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    fastio

    int t;
    cin>>t;
    while(t--){

        int w1, w2, x1, x2, m, dif = 0, lower, upper;
        cin>>w1>>w2>>x1>>x2>>m;
        dif = w2 - w1;
        lower = x1 * m;
        upper = x2 * m;
        if(lower <= dif && dif <= upper){
            cout<<1<<"\n";
        }
        else
            cout<<0<<"\n";


    }
    return 0;
}