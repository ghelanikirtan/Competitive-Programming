//? A. Petya and Strings   https://codeforces.com/problemset/problem/112/A

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

        string s1, s2;
        cin>>s1>>s2;
        int n = s1.length();
        for(int i=0; i<s1.length(); i++){
            if(s1[i] >= 'A' && s1[i] <= 'Z'){
                s1[i] += 32;
                s1[i] = char(s1[i]);
            }
        }

        for(int i=0; i<s2.length(); i++){
            if(s2[i] >= 'A' && s2[i] <= 'Z'){
                s2[i] += 32;
                s2[i] = char(s2[i]);
            }
        }

        if(s1 == s2){
            cout<<0<<"\n";
        }
        
        for (int i = 0; i < n; i++)
        {
            if(s1[i] == s2[i]){
                continue;
            }
            else if(s1[i]<s2[i]){
                cout<<-1<<"\n";
                break;
            }
            else if(s1[i]>s2[i]){
                cout<<1<<"\n";
                break;
            }

        }

    //}
    return 0;
}