// Square Start
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,t;
    cin>>t;
    for (int a = 0; a < t; a++){
        int n,i,x=0,y=0;
        cin>>n;
        for(int i = 1; i<=n; ++i){
            x = i*i;
            y += x;
            if(i==n){
                for(int j = n-1; j > 0; j--){
                    x = j*j;
                    y += x;
                }
            } 
        }
        cout<<y<<"\n";
    }
    return 0;
}
    