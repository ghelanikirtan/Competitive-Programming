//?  Motivation   https://www.codechef.com/LTIME94C/problems/IMDB

#include<bits/stdc++.h>
#define lli long long int
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    fastio

    int t;
    cin>>t;
    while(t--){

        lli n,x;
        cin>>n>>x;
        lli s[n],r[n];
        vector<lli> v;
        for (lli i = 0; i < n; i++)
        {
            cin>>s[i];
            cin>>r[i];
        }
        for(lli i = 0; i < n; i++){
            if(s[i] <= x){
                v.push_back(r[i]);
            }
        }
        cout<<* max_element(v.begin(), v.end())<<"\n";

    }
    return 0;
}