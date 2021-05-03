//?  A. Helpful Maths   https://codeforces.com/problemset/problem/339/A

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
        int n = s.length(), k;

        vector<char> v;
        vector<char> :: iterator it;

        if(n != 1){
            for(int i = 0; i<n ; i+=2){
                v.push_back(s[i]);
            }

            sort(v.begin(), v.end());

            char plus = '+';
            it = v.begin();
            cout<< * it; 

            for(it = v.begin()+1; it < v.end(); it++){
                cout<<plus<< *it;
            }        
            cout<<"\n";
        }
        else cout<<s<<"\n";



    //}
    return 0;
}