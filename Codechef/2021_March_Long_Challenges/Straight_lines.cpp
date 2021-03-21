#include<bits/stdc++.h>
#define lli long long int
#define ld long double
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

// (x-x1)/(x2-x1) = (y-y1)/(y2-y1) 
// lli sl_equation(lli x1, lli y1, lli x2, lli y2, lli x_check, lli y_check){
//     ld x,y, m;

//     m = double(x2 - x1)/double(y2 - y1);

//     x = m*(double(y_check - y1)) + x1;


//     if(x >= x_check){
//         return false;
//     }
//     else{
//         return true;
//     }
// }

// bool condition_check(lli y1, lli y_check, ld slope){
//     ld x,y;
//     x = slope*(double(y_check - y1)) + x1;
// }

int main(){
    // fastio

    // int t;
    // cin>>t;
    // while(t--){

        lli n;
        cin>>n;
        lli a[n],b[n],count = 0, dif = 0;
        vector<lli>v;
        ld m,x,y;
        for(lli i = 0; i<n; i++){
            cin>>b[i];
            a[i] = i+1;
        }
        for (lli i = 0; i < n; i++)
        {
            for (lli j = n-1; j >= i; j++)
            {
                count = 0;
                m = double(j - i)/double(b[j] - b[i]);  //slope


                for( lli k = i+1; k < j; k++){
                    x = m*(double(b[k] - b[i])) + a[i];
                    if(x > k){
                        count++;
                    }
                    else continue;
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


// #include<bits/stdc++.h>
// #define lli long long int
// #define ld long double
// #define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

// using namespace std;

// // (x-x1)/(x2-x1) = (y-y1)/(y2-y1) 
// bool sl_equation(lli x1, lli y1, lli x2, lli y2, lli x_check, lli y_check){
//     ld x,y, m;

//     m = double(x2 - x1)/double(y2 - y1);

//     x = m*(double(y_check - y1)) + x1;

//     if(x >= x_check){
//         return false;
//     }
//     else{
//         return true;
//     }
// }

// int main(){
//     //fastio

//     //int t;
//     //cin>>t;
//     //while(t--){

//         lli f1,f2, n1,n2, l1,l2;
//         cout<<"F --> ";
//         cin>>f1>>f2;
//         cout<<"N --> ";
//         cin>>n1>>n2;
//         cout<<"L --> ";
//         cin>>l1>>l2;
//         lli check = sl_equation(f1,n1, f2,n2, l1,l2);
//         if(check == 1){
//             cout<< "Intersects\n ";
//         }
//         else if(check == 0){
//             cout<< " Don't - Intersect\n";
//         }
//         // cout<<sl_equation(f1,f2, n1,n2);
//         // cout<<sl_equation(f1,f2, n1,n2);


//         // lli n;
//         // cin>>n;
//         // lli a[n],b[n];
//         // vector<lli>v;
//         // lli mini=0, maxi=0;
//         // lli temp = 0, count = 0, dif_x = 0, dif_y = 0;
//         // for(lli i = 0; i<n; i++){
//         //     cin>>a[i];
//         //     b[i] = i+1;
//         // }
//         // for(lli i = 0; i < n; i++){
//         //     for (lli j = n-1; j >= i; j++)
//         //     {

//         //     }
            
//         // }
//     //}
//     return 0;
// }
//     // ld x_given = double(x_check); 
//     // ld y_given = double(y_check);
//     // ld x1 = double(x_1);
//     // ld y2 = double(y_2);

