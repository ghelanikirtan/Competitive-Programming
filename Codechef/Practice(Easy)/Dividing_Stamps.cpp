//? Dividing Stamps  https://www.codechef.com/problems/DIVIDING

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    lli n,x,y=0,sum = 0;
    cin>>n;
    for(lli i = 1; i<=n; i++){
        cin>>x;
        sum += x;
        y += i; 
    }
    if(y == sum)
    cout<<"YES\n";
    else
    cout<<"NO\n";
    return 0;
}

