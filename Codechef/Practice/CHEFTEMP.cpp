//  Meterology Station 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[7],b[7],x=0,n;
    for(int i=0; i<7; i++)
        cin>>a[i];

    for(int i=0; i<7; i++)
        cin>>b[i];

    for (int i = 0; i < 7; i++)
        x += labs(a[i] - b[i]);
    
    cout<<x;
    return 0;
}