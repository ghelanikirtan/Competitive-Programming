//? https://www.codechef.com/JAN21C/problems/DIVTHREE
#include<bits/stdc++.h>
#define lli long long int 
using namespace std;

int main(){
    int j,t,x[t];
    cin>>t;
    for(j=0; j<t; j++){
        lli i,n,k,d,A=0;
        cin>>n>>k>>d;
        for (i = 0; i < n; i++){
            int in;
            cin>>in;
            A += in;
        }
        if(A >= k){
            A /= k;
            if(A>d)
                cout<<d<<"\n";
            else
                cout<<A<<"\n";
        }
        else 
        cout<<0<<"\n";
    }
    return 0;
}