//! Suffix Sort   https://www.codechef.com/ICM2021C/problems/ICM0001
//?     <(-_-)>
#include<bits/stdc++.h>
#define lli long long int
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    //fastio

    //int t;
    //cin>>t;
    //while(t--){

        lli n;
        cin>>n;
        lli a[n], b[n], count = 0;
        for (lli i = 0; i < n; i++)
        {
            cin>>a[i];
            b[i] == a[i];
        }

        sort(b, b+n);
        for(lli i=0; i<n; i++){
            if(a[i] != b[i]){
                count++;
            }
        }
        

    //}
    return 0;
}