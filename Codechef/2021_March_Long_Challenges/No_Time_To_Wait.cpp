//? No Time To Wait  https://www.codechef.com/MARCH21C/problems/NOTIME
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,h,x,d,count=0;
    cin>>n>>h>>x;
    int a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    if(x >= h)
    cout<<"YES\n";
    else{
        d = h -x;
        for(int i =0; i<n; i++){
            if(a[i] == d){
                count++;
                
            }
        }
        if(count > 0)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    
    return 0;
}