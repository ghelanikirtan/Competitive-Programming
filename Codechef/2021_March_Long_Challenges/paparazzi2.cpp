// #include<bits/stdc++.h>
// #define lli long long int
// #define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

// using namespace std;

// int main(){
//     //fastio

//     //int t;
//     //cin>>t;
//     //while(t--){

//         lli n;
//         cin>>n;
//         lli a[n],b[n];
//         vector<lli>v;
//         lli mini=0, maxi=0;
//         lli temp = 0, count = 0, dif_x = 0, dif_y = 0;
//         for(lli i = 0; i<n; i++){
//             cin>>a[i];
//             b[i] = i+1;
//         }
//         for (lli i = 0; i < n; i++)
//         {
//             count = 0;
//             dif_x = 0;
//             dif_y = a[i] - a[n-1];
//             for (lli j = n-1; j > i; j--)
//             {
                
//                 temp = a[i] - a[j];
//                 if(temp >= dif_y){
//                     // count++;
//                     // dif_y = 0;
//                     // break;
//                     // count -= j;
//                     // if(n-1 > dif_x - j){
//                     // dif_x -= j;
//                     // cout<<"|j = "<<j<<" "<<dif_x<<" |";
//                     // }
//                     // if(dif_x < 0)
//                     // dif_x *= -1;
//                 }
//                 else{
//                     dif_x = llabs(i - j);      
//                     dif_y = a[i] - a[j];       
//                     // temp = 
//                 }
//                 // temp = a[i] - a[j];
//             }
//                     cout<<"@ i = "<<i<<" "<<"; "<<dif_x<<" ";
//             v.push_back(dif_x);
//             // if(count == 0)
//         cout<<"\n";
            
//         }
//         lli max_distance = * max_element(v.begin(), v.end());
//         if(max_distance< 0)
//             max_distance *= -1;
        
//         cout<<max_distance<<"\n";
        

//     //}
//     return 0;
// }

#include<bits/stdc++.h>
#define lli long long int
#define ld long double
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

// (x-x1)/(x2-x1) = (y-y1)/(y2-y1) 
lli sl_equation(lli x_check, lli x1, lli y_check, lli y2){
    long double(x_check); long double(y_check);
    long double(x1); long double(y1);


}

int main(){
    //fastio

    //int t;
    //cin>>t;
    //while(t--){

        lli n;
        cin>>n;
        lli a[n],b[n];
        vector<lli>v;
        lli mini=0, maxi=0;
        lli temp = 0, count = 0, dif_x = 0, dif_y = 0;
        for(lli i = 0; i<n; i++){
            cin>>a[i];
            b[i] = i+1;
        }
        for(lli i = 0; i < n; i++){
            for (lli j = n-1; j >= i; j++)
            {

            }
            
        }

    //}
    return 0;
}