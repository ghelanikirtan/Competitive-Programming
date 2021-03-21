//? Lucky Four  https://www.codechef.com/problems/LUCKFOUR
#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    int i,t;
    cin>>t;
    for(i=0; i<t; i++){
        string s;
        cin>>s;
        int count = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '4'){
                count++;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}
