//? College Life 4  https://www.codechef.com/MARCH21C/problems/COLGLF4

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    int t;
    cin>>t;
    for(lli j=0; j<t; j++){
        
        lli n, e, h, a, b, c,  egg = 0, choc = 0, price = 0, cake, omlette, milks, lund_benchod;
        
        cin>>n>>e>>h>>a>>b>>c;
        vector<lli> v;
        if(e == h){
            lund_benchod = e;
        }
        lund_benchod = min(h,e);
        egg = e - lund_benchod;
        choc = h - lund_benchod;
        cake = lund_benchod;
        // sum = e+h;
        // sum /= 2;
        // cout<<sum<<"\n";
        if(n > (e+h)/2){
            cout<<-1<<"\n";
            // v.push_back(-1);
        }
        else{
            while (egg != e && choc != h )
            {
                omlette = egg/2;
                if(e > egg){
                    egg++;
                }
                milks = choc/3;
                if(h > choc){
                    choc++;
                }
                if((omlette+milks+cake) == n){
                    price = (a*omlette) + (b*milks) + (c*cake);
                    // cout<<(a*omlette)<<" + "<<(b*milks)<<" + "<<(c*cake)<<" = "<<price<<"\n";
                    v.push_back(price);
                }
                if(cake > 0){
                    cake--;
                }
    
            }
        
        }
        cout<< * min_element(v.begin(), v.end()) <<"\n";

    }
    return 0;
}
        // for(int i = lund_benchod; i > 0; i--){
        //     cake = i;
        //     omlette = egg/2;
        //     milks = choc/3;
        //     egg++; choc++;

        //     price = (a*omlette) + (b*milks) + (c*cake);
        //     // cout<<(a*omlette)<<" + "<<(b*milks)<<" + "<<(c*cake)<<" = "<<price<<"\n";
        //     v.push_back(price);
        // }
        // sort(v.begin(), v.end());
        // cout<< * v.begin()<<"\n";