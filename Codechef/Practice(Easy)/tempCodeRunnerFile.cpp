//? Racing Horses  https://www.codechef.com/problems/HORSES
#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        
    
        int n;
        cin>>n;
        lli a[n];
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }
        sort(a, a+n);
        lli min,temp, b[n-1];
        for(int i = 1, j=0; i<n; i++,j++ ){

            b[j] = a[i]- a[i-1];
        }
        sort(b, b+(n-1));
        cout<<b[0]<<"\n";
    
    }
    return 0;
}