//? Rectangle   https://www.codechef.com/problems/RECTANGL

#include<bits/stdc++.h>
#define lli long long int
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    fastio

    int t;
    cin>>t;
    while(t--){
        int n;
        n = 4;
        int a[n];
        for(int i =0; i<n; i++){
            cin>>a[i];
        }
        sort(a, a+n);
        if(a[0] == a[1] && a[2] == a[3]){
            cout<<"YES\n";
        }
        else 
        cout<<"NO\n";

    }
    return 0;
}