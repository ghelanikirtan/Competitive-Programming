//?  Smallest Numbers of Notes   https://www.codechef.com/problems/FLOW005

#include<bits/stdc++.h>
#define lli long long int
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    fastio

    int t;
    cin>>t;
    while(t--){

        lli n;
        cin>>n;
        int q = 0, notes[6] = {100, 50, 10, 5, 2, 1};
        for(int i = 0; i < n; i++){
            q += n/notes[i];
            n = n%notes[i];    
        }
        // q = n/100;
        // n = n%100;

        // q += n/50;
        // n = n%50; 

        // q += n/10;
        // n = n%10; 
        
        // q += n/5;
        // n = n%5;
        
        // q += n/2;
        // n = n%2; 
        
        // q += n/1;
        // n = n%1;

        cout<<q<<"\n";
    }
    return 0;
}