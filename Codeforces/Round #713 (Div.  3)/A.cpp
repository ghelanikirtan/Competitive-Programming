//? Spy Detected!    https://codeforces.com/contest/1512/problem/A

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
        cin>>n;
        int a[n], b[n];

        for(int i = 0; i<n; i++){
            cin>>a[i];

        }
        int temp = 0;
        if(a[0] == a[1] || a[0] == a[2]){
            temp = a[0];
        }
        for (int i = 0; i < n; i++){
            
            if(a[i] != temp){
                cout<<i+1<<"\n";
                break;
            }
            else continue;
        }
        
        
    }
    return 0;
}