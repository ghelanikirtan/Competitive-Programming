//? https://www.codechef.com/COOK126C/problems/PTUPLES
#include<bits/stdc++.h>
using namespace std;

int main(){
    // int i,t;
    // cin>>t;
    // for(i=0; i<t; i++){
    int n,tuple[3];
    vector<int> v;

    cin>>n;
    for(int i = n; i > 0 ; i--){
        if(n%i != 0 || i==2){
            v.push_back(i);
            cout<<i<<" ";
        }
    }
    int x = * v.begin();
    int y = * (v.begin() +1);
    int z = * (v.begin() +2);
    
    if (x + y == z)
    cout<<1;
    else 
    cout<<0;
    // }
    return 0;
} 