//? Make the Sum Even    https://www.codechef.com/LTIME94C/problems/MKSMEVN

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
        lli a[n];
        for(lli i=0; i<n; i++){
            cin>>a[i];
        }
        lli count=0, s =accumulate(a, a+n, 0);
        if(s%2 == 0)
        cout<<0<<"\n";
        else{
            for (lli i = 0; i < n; i++)
            {
                if(a[i]==2){
                    count++;
                    break;
                }
                else continue;
            }
            if(count>0)
            cout<<1<<"\n";
            else
            cout<<-1<<"\n";
            
        }

    }
    return 0;
}
