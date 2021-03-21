#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    n%=4;
    if(n==3||n==0)
    cout<<0<<"\n";
    else
    cout<<1<<"\n";
}