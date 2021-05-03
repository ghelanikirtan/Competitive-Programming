//?  A. String Task   https://codeforces.com/problemset/problem/118/A

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
        // char c[s.length()];
        vector<int> v;
        vector<int> :: iterator it;

        for(int i = 0; i<s.length(); i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i] += 32;

            }
            if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y'){
                v.push_back(s[i]);
                // j++;
            }
        }
        char d = '.';
        for(it = v.begin(); it < v.end() ; it++){
            cout<<d<< char(*it);
        }
        cout<<"\n";
        

    //}
    return 0;
}