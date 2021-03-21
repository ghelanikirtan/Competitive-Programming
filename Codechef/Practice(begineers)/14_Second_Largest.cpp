#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,t;
    cin>>t;
    for(i=0; i<t; i++){
        long int a[3];
        long int n=3,j;
        for(j = 0; j<n; j++){
            long int in;
            cin>>in;
            a[j]=in; 
        }
        sort(a, a+n);
        cout<< a[1]<<"\n";
    }
    return 0;
}