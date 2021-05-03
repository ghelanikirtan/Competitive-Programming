//?  AGAGA XOOORRR   https://codeforces.com/contest/1516/problem/B

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

        lli n;
        cin>>n;
        lli a[n+1];
        for(lli i=0; i<n; i++){
            cin>>a[i];
            // b[i]=a[i];
        }

        vector<lli> v;
        vector<lli> :: iterator it;
        sort(a,a+n);
        a[n] = -1;
        lli count=0;
        for(lli i = 0; i<n; i++){
            if(a[i] != a[i+1]){
                v.push_back(a[i]);     
            }
        }
        lli k = v.size();
        for(it = v.begin(); it<v.end(); it++){
            cout<<*it<<" ";
        }

    //}
    return 0;
}