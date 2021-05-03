//?  A. Chat room   https://codeforces.com/problemset/problem/58/A

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

        string s;
        cin>>s;

        int n = s.length();

        int i=0, fst = 0, scnd = 0, thrd = 0, frth = 0, fifth = 0;
        for(lli i =0; i<n;i++){

            if(s[i]=='h'){
                fst=1;
            }
            if(fst >= 1 && s[i] == 'e'){
                scnd = 1;
            }
            if(scnd >= 1 && s[i] == 'l'){
                thrd += 1;
            }
            // if(thrd >= 1 && s[i] == 'l'){
            //     frth = 2;
            // }
            if(thrd >= 2 && s[i] == 'o'){
                fifth = 1;
            }
        }
        if(fst ==1 && scnd ==1 && thrd >= 2 && fifth ==1 ){
            cout<<"YES\n";
        }
        else cout<<"NO\n";

    //}
    return 0;
}
