#include<bits/stdc++.h>
#define lli long long int
#define ld long double
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

// (x-x1)/(x2-x1) = (y-y1)/(y2-y1) 
lli sl_equation(lli x1, lli y1, lli x2, lli y2, lli x_check, lli y_check){
    ld x,y, m;

    m = double(x2 - x1)/double(y2 - y1);

    x = m*(double(y_check - y1)) + x1;
    

    if(x >= x_check){
        return false;
    }
    else{
        return true;
    }
}

int main(){
    // fastio

    // int t;
    // cin>>t;
    // while(t--){

        lli n;
        cin>>n;
        lli y[n],x[n],count = 0, dif = 0;
        vector<lli>v;
        for(lli i = 0; i<n; i++){
            cin>>y[i];
            x[i] = i+1;
        }
        for (lli i = 0; i < n; i++)
        {
            for (lli j = n-1; j >= i;j++)
            {
                count = 0;
                for( lli k = i+1; k < j; k++){
                    // if(sl_equation(x[i], y[i], x[j], y[j], x[k], y[k]) == 1){
                    if(sl_equation(i+1, y[i], j, y[j], k+1, y[k]) == 1){
                        count++;
                    }
                    // else continue;
                }
                if (count == 0){
                    dif = llabs(j-i);
                    v.push_back(dif);
                }
                // else continue;
            }
        }
        cout<< * max_element(v.begin(), v.end())<<"\n";
        
    // }


    return 0;
}