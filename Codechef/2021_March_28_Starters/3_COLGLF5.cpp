//? College Life   https://www.codechef.com/START2C/problems/COLGLF5
#include<bits/stdc++.h>
#define lli long long int
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    fastio

    int t;
    cin>>t;
    while(t--){

        lli n, m, count = 0;
        cin>>n>>m;
        lli f[n], c[m];
        for(lli i = 0; i<n; i++){
            cin>>f[i];
        }
        for(lli i = 0; i<m; i++){
            cin>>c[i];
        }
        f[n] = 0;
        c[m] = 0;
        sort(f, f+n);
        sort(c, c+m);
        // for(lli i = 0, j =0; i<n, j<m; i++, j++){
        //     if(f[i] < c[i]){
        //         if(c[j] < f[i+1]){
        //             count++;
        //         }
        //     }
        //     else if(c[i] > f[i]){
        //         count++;
        //         if(f[i] < c[j+1]){
        //             count++;
        //         }
        //     }
        // }
        lli i=0, j=0, k=0, a[n+m], countn = 0, countm =0;
        while(i<n && j<m){
            if(f[i]<c[j]){
                a[k++] = f[i++];
                countn++;
            }
            else{
                a[k++] = c[j++];
                countm++;
            }
        }
            countn += 1;
        count = countn + countm;
        if(f[0] > c[0]){
            count +=1;
        }
        cout<<countn<<" "<<countm<<"\n";
        cout<< count<< "\n";
    }
    return 0;
}