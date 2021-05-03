//?  A. Twins   https://codeforces.com/problemset/problem/160/A#

#include <bits/stdc++.h>
#define lli long long int
#define ld long double
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    //fastio

    //lli t;
    //cin>>t;
    //while(t--){

        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];

        sort(a,a+n);

        int sum =0;
        sum = accumulate(a, a+n, sum);
        sum /= 2;

        int outpt = 0;
        for(int i = 0, j = n-1; i<n; i++, j--){
            outpt += a[n-1-i];
            if(outpt>sum){
                outpt = i+1;    
                break;
            }
        }
        cout<<outpt<<"\n";
    //}
    return 0;
}