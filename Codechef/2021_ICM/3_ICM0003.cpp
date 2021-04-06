//? Infinite Polygons   https://www.codechef.com/ICM2021C/problems/ICM0003

#include<bits/stdc++.h>
#define lli long long int
#define ld long double
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    fastio

    int t;
    cin>>t;
    while(t--){

        lli n;
        cin>>n;
        ld pi = atan(1)*4;
        ld angle = pi*(1 - double(2)/n);
        // ld angle = (2/n)*pi;
        ld sine = sin(angle/2);     //Internal angle 
        ld x = pow(sine, 2);
        ld ans = 1/(1-x);           //Sum of infinite GP
        cout<<fixed<<setprecision(8)<<ans<<"\n";
        
    }
    return 0;
}


//!  Wrong one 👇       (-_-)
// #include<bits/stdc++.h>
// #define lli long long int
// #define ld long double
// #define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

// using namespace std;

// int main(){
//     fastio

//     int t;
//     cin>>t;
//     while(t--){

//         lli n;
//         cin>>n;
//         ld pi = atan(1)*4;
//         // ld angle = pi*(1 - double(2)/n);
//         ld angle = double(360)/n;
//         angle *= (pi/double(180));
//         angle /= 2;
//         // ld angle = (2/n)*pi;
//         ld sine = sin(angle/2);
//         ld x = pow(sine, 2);
//         ld ans = 1/(1-x);
//         cout<<fixed<<setprecision(8)<<ans<<"\n";
        
//     }
//     return 0;
// }