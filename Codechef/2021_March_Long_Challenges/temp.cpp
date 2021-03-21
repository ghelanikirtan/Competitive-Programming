//? College Life 4  https://www.codechef.com/MARCH21C/problems/COLGLF4

#include<bits/stdc++.h>
#define lli long long int
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int i,t;
    cin>>t;
    for(i=0; i<t; i++){
        fastio

        lli n, e, h, a, b, c;
        cin>>n>>e>>h>>a>>b>>c;
        lli egg = 0, choc = 0, price = 0, cake, omlette, milks, lund_benchod, minimum;
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
        minimum = min(a,b);
        minimum = min(minimum,c);
        lund_benchod = min(h,e);
        egg = e - lund_benchod;
        choc = h - lund_benchod;
        cake = lund_benchod;
        // if(n>h && n>e){
        if(n >(h+e)/2){
            v.push_back(-1);
        }
        else{

            for(lli i = lund_benchod; i >= 0; i--){
            // for(lli i = __gcd(e,h); i > 0; i--){
                cake = i;
                omlette = egg/2;
                milks = choc/3;
                egg++; choc++;

                if(n < (omlette+milks+cake)&&(e+h)/2 >= 2*n && e>n && h>n){
                    // cout<<"no";
                    v.push_back(n*minimum);
                }
                else if((omlette+milks+cake) == n){
                    price = (a*omlette) + (b*milks) + (c*cake);
                // cout<<(a*omlette)<<" + "<<(b*milks)<<" + "<<(c*cake)<<" = "<<price<<"\n";
                    // if()
                    v.push_back(price);
                }

            }
        }
        // sort(v.begin(), v.end());
        // cout<< * v.begin()<<"\n";
        cout<< * min_element(v.begin(), v.end()) <<"\n";

    }
    return 0;
}