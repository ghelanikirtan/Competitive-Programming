//? The Smallest Pair   https://www.codechef.com/problems/SMPAIR

#include<bits/stdc++.h>
#define lli long long int
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    fastio

    int t;
    cin>>t;
    while(t--){

        int n,x;
        cin>>n;
        int a[n], b[n];
        vector<int> v;
        for(int i = 0; i<n; i++){
            cin>>a[i];
        
        }
        // for(int i = 0; i<n; i++){
        //     for(int j = i; j<n; j++){
        //         if(a[i]!=a[j]){
        //         x = a[i] + a[j];
        //         v.push_back(x);
        //         }
        //     }
        // }
        // cout<< * min_element(v.begin(), v.end())<<"\n";
        sort(a, a+n);
        cout<<a[0]+a[1]<<"\n";
    }
    return 0;
}