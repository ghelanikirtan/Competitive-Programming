//? Chef and The Right Triangles   https://www.codechef.com/problems/RIGHTRI

#include<bits/stdc++.h>
#define lli long long int
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    fastio

    int t,count = 0;
    cin>>t;
    while(t--){

        lli x1,y1, x2,y2, x3,y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        lli a[3],maxi=0,mini=0;
        a[0] = ((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
        a[1] = ((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3));
        a[2] = ((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1));
        sort(a, a+3);
        if(a[0]+a[1] == a[2]){
            count++;
        }
        else continue;
    }
    cout<<count;
    return 0;
}   