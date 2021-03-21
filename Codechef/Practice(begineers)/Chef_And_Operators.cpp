//? Chef And Operators  https://www.codechef.com/problems/CHOPRT
#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    int i,t;
    cin>>t;
    for(i=0; i<t; i++){
        
        lli a,b;
        cin>>a>>b;
        if(a == b){
            cout<<"=\n";
        }
        else if(a>b)
            cout<<">\n";
        else
            cout<<"<\n";
    }

    return 0;
}
