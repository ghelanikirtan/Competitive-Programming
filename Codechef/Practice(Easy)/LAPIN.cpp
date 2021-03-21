//! Lapindromes   https://www.codechef.com/problems/LAPIN
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string s,o,e;
//     cin>>s;
//     // temp  = s;
//     int n = s.length();
//     if(n%2 != 0){
//         // for(int i=0; i<(n/2); i++){
//         //     temp[i] = 
//         // }

//     }
//     cout<<n;

//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++){
        if(i < 10 && (i == 2  || i == 3  || i == 5  || i == 7 )){
            cout<<i<<endl;
        }
        if(i%2 != 0 && i%3 != 0 && i%5 != 0 && i%7 != 0 && i != 1){
            cout<<i<<endl;
        }
    }
    return 0;
}