// Chef and Coupon
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,t;
    cin>>t;
    for(i=0; i<t; i++){
        int D,C,a[3],b[3],x,y;
        cin>>D>>C;
        cin>>a[0]>>a[1]>>a[2];
        cin>>b[0]>>b[1]>>b[2];
        x = a[0]+a[1]+a[2];
        y = b[0]+b[1]+b[2];
        int wc = C+D+x+y;
        int woc = D+x+y;
        cout<<wc<<"\n";
        cout<<woc<<"\n";
    //     if(x>=150 && y>= 150)
    //     cout<<"YES\n";
    //     else
    //     cout<<"NO\n";
    //
    }
    return 0;
}