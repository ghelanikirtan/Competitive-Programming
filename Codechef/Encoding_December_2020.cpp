//? Morning Assembly https://www.codechef.com/ENDE2020/problems/ENCDEC2
// #include<bits/stdc++.h>
// #define lli long long int
// using namespace std;

// int main(){
//     int i,t;
//     cin>>t;
//     for(i=0; i<t; i++){
//         lli r,c;
//         cin>>r>>c;
//         if(r >= 2 && c >=2 )
//             cout<<r*c<<"\n";
//     }
//     return 0;
// } 

//! Happy kids https://www.codechef.com/ENDE2020/problems/ENCDEC01
//? RTE
// #include<bits/stdc++.h>
// #define li long int 
// using namespace std;

// int main(){
//     int i,t;
//     cin>>t;
//     for(i=0; i<t; i++){
//         li j,n,x,a[n],dif;
//         cin>>n>>x;
//         for(j =0; j<n; j++)
//         cin>>a[j]; 
//         sort(a, a+n);
//         dif = labs(a[0] - a[n-1]);
//         if(dif < x)
//         cout<<"YES\n";
//         else
//         cout<<"NO\n";
//     }
//     return 0;
// }

//? Team Strength https://www.codechef.com/ENDE2020/problems/ENCDEC04
// #include<bits/stdc++.h>
// #define lli long long int
// using namespace std;

// int team_strength(lli a, lli b){
//     lli n =0;
//     for(lli i=0,j=1; i<a; i++,j++){
//         if(j%b == 0){
//                 j %= 10;
//                 n += j;
//         }
//     }
//     // cout<<n<<"\n"; 
//     return n;
// }

// int main(){
//     int i,t;
//     cin>>t;
//     for(i=0; i<t; i++){
//         lli x,y;
//         cin>>x>>y;
//         cout<< team_strength(x,y)<<"\n";
//     }
//     return 0;
// }

// int main(){
//     int i,t;
//     cin>>t;
//     for(i=0; i<t; i++){
//         lli i,j,x,y,n;
//         cin>>x>>y;
//         vector<int> v;
//         for(i=0,j=1; i<x; i++,j++){
//             if(j%y == 0){
//                     j %= 10;
//                     v.push_back(j);
//             }
//         } 
//         cout<<accumulate(v.begin(), v.end(), 0)<<"\n"; 
//     }
//     return 0;
// }

//? Chef and his games https://www.codechef.com/ENDE2020/problems/ENCDEC5
// #include<bits/stdc++.h>
// #define lli long long int 
// using namespace std;

// int main(){
//     int j,t;
//     cin>>t;
//     for(j=0; j<t; j++){
        
//         lli n,m;
//         cin>>n;
//         lli a[n];
//         for(int i = 0; i < n; i++){
//             cin>>a[i];
//         }
//         cin>>m;

//         for(int i = 0; i < n; i += 2){
//             if(n%2 == 0){
//                 int temp=0;
//                 temp = a[i];
//                 a[i] = a[i+1];
//                 a[i+1] = temp;
//                 a[i] += (a[i]%3);
//                 a[i+1] += (a[i+1]%3);
//             }
//             else{
//                 if(i == n-1){
//                     a[n-1] += (a[n-1]%3);
//                     break;  
//                 }
//                 else{      
//                     int temp=0;
//                     temp = a[i];
//                     a[i] = a[i+1];
//                     a[i+1] = temp;
//                     a[i] += (a[i]%3);
//                     a[i+1] += (a[i+1]%3);
//                 }
//             }
//         }
//         sort(a, a+n);
//         if(m > a[0] && a[n-1] >m ){
//             for(int i =0; i<n; i++){
//                 if(m >= a[i] && a[i+1] >= m){
//                     cout<<a[i]<<" "<<a[i+1]<<"\n";
//                 }
//             }    
//         }
//         else{ 
//             if(m > a[n-1])
//                 cout<<a[n-1]<<" "<<-1<<"\n";
//             else if(a[0] > m)
//                 cout<<-1<<" "<<a[0]<<"\n";
//             else if(m >= a[n-1]) 
//                 cout<<a[n-2]<<" "<<-1<<"\n";
//             else if(a[0] >= m)
//                 cout<<-1<<" "<<a[1]<<"\n";
//         }
        
//     }
//     return 0;
// } 
#include<bits/stdc++.h>
#define lli long long int 
using namespace std;

int main(){
    int j,t;
    cin>>t;
    for(j=0; j<t; j++){
        
        lli n,m;
        cin>>n;
            lli a[n];
            for(lli i = 0; i < n; i++){
                cin>>a[i];
                a[i] += (a[i]%3);

            }
            cin>>m;
            sort(a, a+n);
            // if(m > a[0] && a[n-1] >m ){
            //     for(lli i =0; i<n; i++){
            //         if(m >= a[i] && a[i+1] >= m){
            //             cout<<a[i]<<" "<<a[i+1]<<"\n";
            //         }
            //     }    
            // }
            lli upper = -1, lower = -1;
            for(int i = 0; i<n; i++){
                if(a[i] > m){
                    upper = a[i];
                    break; 
                }
            }
            for(int i= n-1; i >= 0; i--){
                if(a[i] < m){
                    lower = a[i];
                    break;
                }
            }
            // else{ 
            //     if(m > a[n-1])
            //         cout<<a[n-1]<<" "<<-1<<"\n";
            //     else if(a[0] > m)
            //         cout<<-1<<" "<<a[0]<<"\n";
            //     else if(m >= a[n-1]) 
            //         cout<<a[n-2]<<" "<<-1<<"\n";
            //     else if(a[0] >= m)
            //         cout<<-1<<" "<<a[1]<<"\n";
            // }
            cout<<lower<<" "<<upper<<"\n";
        
    }
    return 0;
} 