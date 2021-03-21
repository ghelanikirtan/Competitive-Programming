//? Space Arrays  https://www.codechef.com/MARCH21C/problems/SPACEARR
#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    int i,t;
    cin>>t;
    for(i=0; i<t; i++){
        
        int n;
        cin>>n;
        int a[n], p[n], count = 0, dif = 0;
        for(int i = 0; i<n; i++){
            cin>>a[i];
            p[i] = i+1;
        }
        sort(a, a+n);
        for(int i = 0; i<n; i++){
            if(a[i] > p[i]){
                // cout<<"Second\n";
                dif = 2;
                break;
            }
            else{
                dif += a[i] - p[i];
            } 
        }
        if(dif%2 != 0)
        cout<<"First\n";
        else if(dif%2 == 0)
        cout<<"Second\n"; 

    }
    return 0;
}