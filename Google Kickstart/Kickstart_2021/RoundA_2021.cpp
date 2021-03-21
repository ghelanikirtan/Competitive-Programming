//? K - Goodness String   https://codingcompetitions.withgoogle.com/kickstart/round/0000000000436140/000000000068cca3

#include<bits/stdc++.h>
#define lli long long int
#define ld long double
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    fastio

    int q = 1,t;
    cin>>t;
    while(t--){
        
        int n,k;
        cin>>n>>k;
        char s[n];
        // int j;
        for(int i = 0; i<n; i++){
            cin>>s[i];
        }
        int count = 0;
        if(n/2 == 0){    
            for(int i = 0, j = n-1; i < n; i++, j--){
                if(s[i] != s[j]){
                    // cout<<s[i]<<" !=  "<<s[j]<<" ";
                    count++;
                }
                if(i == j){
                    break;
                }
            }
        }
        else if(n/2 != 0){
            for(int i = 0, j = n-1; i < n; i++, j--){
                if(s[i] != s[j]){
                    // cout<<s[i]<<" !=  "<<s[j]<<" ";
                    count++;
                }
            }
            count /= 2;
        }
        cout<<"Case #"<<q<<": "<<llabs(k-count)<<"\n";
        q++;
    }
    return 0;
}


//! L Shaped Plots  https://codingcompetitions.withgoogle.com/kickstart/round/0000000000436140/000000000068c509 