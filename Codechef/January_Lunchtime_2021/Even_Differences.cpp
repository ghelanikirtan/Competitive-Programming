#include<bits/stdc++.h>
#define lund long long int
using namespace std;

int main(){
    lund i,t;
    cin>>t;
    for (i = 0; i < t; i++){
        lund j,n,even_condition = 0;
        cin>>n;
        vector<lund> v;
        for (j = 0; j < n; j++){
            lund in;
            cin>>in;
            v.push_back(in);
        }
        vector<lund> :: iterator it;
        for (it= v.begin(); it < v.end(); it++){
            if(*it%2 != 0)
            even_condition++;
        }
        if (n == even_condition)
        cout<<"0\n";
        else if(even_condition > (n - even_condition))
        cout<<(n-even_condition)<<"\n";
        else
        cout<<even_condition<<"\n";
    }
    return 0;
}
// #include <iostream>
// #define lli long long int 
// using namespace std;

// int main() {
//     lli t;
//     cin>>t;
//     while(t--){
//         lli n;
//         cin>>n;
//         lli a[n];
//         for(lli i=0;i<n;i++){
//             cin>>a[i];
//         }
//         lli c=0;
//         for(lli i=0;i<n;i++){
//             if(a[i]%2!=0){
//                 c++;
//             }
//         }
//         if(c==n){
//             cout<<0<<endl;
//         }
//         else if(c>(n-c)){
//             cout<<n-c<<endl;
//         }
//         else{
//             cout<<c<<endl;
//         }
//     }
//     return 0;
// }