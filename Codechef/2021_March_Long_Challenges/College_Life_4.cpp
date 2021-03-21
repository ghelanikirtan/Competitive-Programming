//? College Life 4  https://www.codechef.com/MARCH21C/problems/COLGLF4

#include<bits/stdc++.h>
#define lli long long int
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    fastio

    
    int i,t;
    cin>>t;
    for(i=0; i<t; i++){
        
        lli n, e, h, a, b, c;
        cin>>n>>e>>h>>a>>b>>c;
        lli egg = 0, choc = 0, price = 0, cake, omlette, milks, lund_benchod;
        vector<lli> v;
        // if(e == h){
        //     // egg = (n - e);
        //     // choc = (n - h);
        //     lund_benchod = e;
        //     if(n > e){
        //         v.push_back(-1);
        //     }
        // }
        // else if(e > h){
        //     // egg = dif; 
        //     lund_benchod = h;
        //     if(n > e){
        //         v.push_back(-1);
        //     }       
        // }
        // else if(h > e){
        //     // choc = dif;
        //     lund_benchod = e;
        //     if(n > h){
        //         v.push_back(-1);
        //     }       
        // }
        lund_benchod = min(h,e);

        egg = e - lund_benchod;
        choc = h - lund_benchod;
        for(lli i = lund_benchod; i >= 0; i--){
            cake = i;
            omlette = egg/2;
            milks = choc/3;
            egg++; choc++;

            price = (a*omlette) + (b*milks) + (c*cake);
            // cout<<(a*omlette)<<" + "<<(b*milks)<<" + "<<(c*cake)<<" = "<<price<<"\n";
            v.push_back(price);
        }
        // sort(v.begin(), v.end());
        // cout<< * v.begin()<<"\n";
        cout<< * min_element(v.begin(), v.end()) <<"\n";

    }
    return 0;
}