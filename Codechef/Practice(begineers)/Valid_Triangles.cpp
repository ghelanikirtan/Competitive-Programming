#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,t;
    cin>>t;
    for (i = 0; i < t; i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c == 180)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}