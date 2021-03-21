//? Pawri Meme   https://www.codechef.com/COOK127C/problems/PAWRI

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
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'p' && s[i+1] == 'a' && s[i+2] == 'r' && s[i+3] == 't' && s[i+4] == 'y' ){
                s[i] = 'p';
                s[i+1] = 'a';
                s[i+2] = 'w';
                s[i+3] = 'r';
                s[i+4] = 'i';
            }
        }
        cout<<s<<"\n";

    }
    return 0;
}