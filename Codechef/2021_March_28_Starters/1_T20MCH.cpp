//? Possible Victory   https://www.codechef.com/START2C/problems/T20MCH 

#include<bits/stdc++.h>
#define lli long long int
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    
    int r, o, c;
    int balls_left, runs_req, runs_possible; 
    cin>>r>>o>>c;
    if(r >= 720){
        cout<<"NO\n";
    }
    else if(r < 720 && o < 20){
        balls_left = (20-o)*6;
        runs_possible = 6*balls_left;
        runs_req = r-c;
        runs_req += 1;
        if(runs_possible >= runs_req)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }

    return 0;
}