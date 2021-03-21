#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,t;
    cin>>t;
    for(i=0; i<t; i++){
        int n; cin>>n;
        bool a[n];
        for (int j = 0; j < n; j++){
            cin>>a[j];
        }
        sort(a, a+n);
        int count=0;
        for(int j = 0; j<n; j++){
            if(a[j]==1)
            break;
            else
            count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}