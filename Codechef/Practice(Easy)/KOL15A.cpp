//? Processing a String    https://www.codechef.com/problems/KOL15A
#include<bits/stdc++.h>
#define lli long long int
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    fastio

    int t;
    cin>>t;
    while(t--){

        string s;
        cin>>s;
        lli sum = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] <= '9' && '0' <= s[i]){
                // cout<<s[i]<<" ";
                sum += s[i]-48;
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}