//? Factorial  https://www.codechef.com/problems/FCTRL
// #include<bits/stdc++.h>
// #define lli long long int
// using namespace std;

// int main(){
//     int i,t;
//     cin>>t;
//     for(i=0; i<t; i++){
        
//         lli n;
//         cin>>n;
//         // for(lli i = 1, j = 0; i<=n; i += 5, j++){
//         //     if(n > (i-1) && n <= i ){
//         //         cout<<j;
//         //     }
//         // }
//         int i = 5,sum = 0;
//         while(0 < (n/i)){
//             // if(n > (i) && n <= (i+5) ){
//                 // cout<<i;
//                 // break;
//             // }
//             sum += n/i ;
//             i*=5;
//         }
//         cout<<sum<<"\n";

//     }
//     return 0;
// }

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        
        lli n,sum = 0;
        cin>>n;
        for(lli i = 5; (n/i) >= 1; i*=5){
            sum += n/i;
        }
        cout<<sum<<"\n";
    }
    return 0;
}