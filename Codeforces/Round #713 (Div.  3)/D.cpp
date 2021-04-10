//?  Corrupted Array   https://codeforces.com/contest/1512/problem/D

#include<bits/stdc++.h>
#define lli long long int
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    fastio

    int t;
    cin>>t;
    while(t--){

        lli N, sum = 0;
        cin>>N;
        lli n = N+2;
        lli b[n];
        for(lli i = 0; i<n; i++){
            cin>>b[i];
        }
        sort(b, b+n);
        sum = b[n-1];

        lli currentsum = 0, x=0 ,y=0;
        for (lli i = 0; i < n-1; i++)
        {
            currentsum = b[i];
            for(lli j = i; j<n-1; j++){
                if(sum == currentsum){
                    x = i;
                    y = j;
                    cout<<b[j]<<" ";
                }
                else if(n==j || currentsum > sum ) break;

                currentsum += b[j];
            }
        }
        cout<<x<< " "<<y;
        // if(sizeof(b) != 0){
        //     for (lli i = x; i <= y; i++)
        //     {
        //         cout<<b[i]<<" ";
        //     }
        // }
        // else cout<<-1<<"\n";
        cout<<"\n";


    }
    return 0;
}