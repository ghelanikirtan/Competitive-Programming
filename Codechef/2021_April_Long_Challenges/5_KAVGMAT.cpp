//? Worthy Matrix   https://www.codechef.com/APRIL21C/problems/KAVGMAT
#include<bits/stdc++.h>
#define lli long long int
#define ld long double
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    //fastio

    //int t;
    //cin>>t;
    //while(t--){

        lli n,m,k,count=0, minm = 0;
        cin>>n>>m>>k;
        lli a[n][m];
        for(lli i = 0; i<n; i++){
            for (lli j = 0; j < m; j++){
                cin>>a[i][j];
                // if(a[i][j] >= k){
                //     count++;
                // }
            }
        }
        lli sum=0, sumx=0, sumy=0, ave = 0;
        if(n == m){
            minm = n;
            for (lli l = 0; l < minm; l++){
                for(lli i = 0; i<n; i++){
                    for (lli j = 0; j < m; j++){
                        lli p = 0;
                        for(lli p = 0; p < minm; p++){
                            sumx += a[i][j+p];
                            sumy += a[i+p][j];
                            sum = sumx + sumy;
                        }
                        // while(p == l){
                        //     sumx += a[i][j+p];
                        //     p++;
                        // }
                        // lli q = 0;
                        // while(q == l){
                        //     sumy += a[i+q][j];
                        //     q++;
                        // }
                        sum = sumx + sumy;
                        ave = sum/(l*l);
                        sum = 0; sumx = 0; sumy = 0;
                        if(ave >= k){
                            count++;
                        }
                    }
                    
                }
                
            }
            

        }
        else{
            minm = min(n,m);
        }
        
        cout<<count<<"\n";
    //}
    return 0;
}