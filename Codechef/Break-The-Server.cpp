//? PCM Dilemma https://www.codechef.com/CCHI2021/problems/CCBTS01
#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,t;
    cin>>t;
    for(i=0; i<t; i++){
        string s;
        cin>>s;
        if(s.length() == 3){
            char c[3];
            c[0] = s[0];
            c[1] = s[1];
            c[2] = s[2];
            sort(c, c+3);
            if(c[0] == 'C' && c[1] == 'M' && c[2] == 'P')
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    return 0;
} 

//? Memcached Service https://www.codechef.com/CCHI2021/problems/CCBTS02
