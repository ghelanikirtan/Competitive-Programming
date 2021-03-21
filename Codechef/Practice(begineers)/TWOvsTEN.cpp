//? Two vs Ten   https://www.codechef.com/problems/TWOVSTEN
#include<bits/stdc++.h>
#define lli long long int
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    fastio

    int t;
    cin>>t;
    while(t--){

        lli n, count=0;
        cin>>n;
        // lli a = n%10;
        // while(n%10 != 0){
        //     n = n*2;
        //     count++;

        // }
        // for(lli i = 0; ; i++){
        //     n *= 2; 
        //     count++;
        //     if(n%10 == 0){
        //         break;
        //     }
        //     else{
        //         count = -1;
        //     }
        // }
        // if(n == 0){
        //     cout<<-1<<"\n";
        // }
        if(n%10 == 0){
            cout<<0<<"\n";
        }
        else if((n*2)%10 == 0){
            cout<<1<<"\n";
        }
        else
            cout<<-1<<"\n";


    }
    return 0;
}