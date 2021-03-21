#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,t;
    cin>>t;
    for (i = 0; i < t; i++){
        int a,b,c;
        cin>>a>>b>>c;
        vector<int> v = {a,b,c};
        sort(v.begin(),v.end());
        if(* v.rbegin() == * v.begin() + *(v.begin()+1))
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}