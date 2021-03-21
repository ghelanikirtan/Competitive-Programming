#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    int i,t;
    cin>>t;
    for(i=0; i<t; i++){
        lli n,e,h;
        cin>>n>>e>>h;
        cout<<"2*n = "<<2*n<<"\n";
        cout<<"Avg. = "<<(e+h)/2<<"\n";
        cout<<"gcd = "<<__gcd(e,h)<<"\n";
    }

    return 0;
}   