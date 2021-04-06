//? Binary String MEX   https://www.codechef.com/APRIL21C/problems/MEXSTR

#include<bits/stdc++.h>
#define lli long long int
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    //fastio

    //int t;
    //cin>>t;
    //while(t--){

        string s;
        cin>>s;
        lli count_0=0, count_1=0, count_2=0;
        for(lli i = 0; i<s.length(); i++){
            if(s[i]=='0') count_0++;
            if(s[i]=='1') count_1++;
        }

    //}
    return 0;
}











// #include<bits/stdc++.h>
// #define lli long long int
// #define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

// using namespace std;

// int main(){
//     fastio

//     int t;
//     cin>>t;
//     while(t--){

//         string s;
//         cin>>s;
//         // s = s1 + s;
//         lli count_0=0, count_1=0, count_2 = 0, count_3 = 0, count_4 = 0, count_5 = 0, count_6 = 0, count_7 = 0;
//         lli count_8=0, count_9=0, count_10=0;
//         for (int i = 0; i < s.length()-4; i++){
//             if(s[i] == '0'){
//                 count_0++;
//             }
//             if(s[i] == '1'){
//                 count_1++;
//             }
//             if(s[i+0] == '1' && (s[i+1] == '0' || s[i+2] == '0' || s[i+3] == '0')){
//                 count_2++;
//             }
//             if(s[i+0] == '1' && (s[i+1] == '1' || s[i+2] == '1' || s[i+3] == '1')){
//                 count_3++;
//             }
//             if(s[i+0] == '1' && ((s[i+1] == '0' &&(s[i+2]= '0' || s[i+3]=='0')) || ((s[i+2] == '0' &&(s[i+3] == '0'))))){
//                 count_4++;
//             }
//             if(s[i+0] == '1' && ((s[i+1] == '0' &&(s[i+2]= '1' || s[i+3]=='1')) || ((s[i+2] == '0' &&(s[i+3] == '1'))))){
//                 count_5++;
//             }
//             if(s[i+0] == '1' && ((s[i+1] == '1' &&(s[i+2]= '0' || s[i+3]=='0')) || ((s[i+2] == '1' &&(s[i+3] == '0'))))){
//                 count_6++;
//             }
//             if(s[i+0] == '1' && ((s[i+1] == '1' &&(s[i+2]= '1' || s[i+3]=='1')) || ((s[i+2] == '1' &&(s[i+3] == '1'))))){
//                 count_7++;
//             }
//             if(s[i+0] == '1' && s[i+1] == '0' && s[i+2] == '0' && s[i+3] == '0' ){
//                 count_8++;
//             }
//             if(s[i+0] == '1' && s[i+1] == '0' && s[i+2] == '0' && s[i+3] == '1' ){
//                 count_9++;
//             }
//             if(s[i+0] == '1' && s[i+1] == '0' && s[i+2] == '1' && s[i+3] == '0' ){
//                 count_10++;
//             }
//         }

//         if(count_0 == 0){
//             cout<<0<<"\n";
//         }
//         else if(count_1 == 0){
//             cout<<1<<"\n";
//         }
//         else if(count_2 == 0){
//             cout<<10<<"\n";
//         }
//         else if(count_3 == 0){
//             cout<<11<<"\n";
//         }
//         else if(count_4 == 0){
//             cout<<100<<"\n";
//         }
//         else if(count_5 == 0){
//             cout<<101<<"\n";
//         }
//         else if(count_6 == 0){
//             cout<<110<<"\n";
//         }
//         else if(count_7 == 0){
//             cout<<111<<"\n";
//         }
//         else if(count_8 == 0){
//             cout<<1000<<"\n";
//         }
//         else if(count_9 == 0){
//             cout<<1001<<"\n";
//         }
//         else if(count_10 == 0){
//             cout<<1010<<"\n";
//         }
//         else cout<<"bund maraa\n";
 
        

//     }
//     return 0;
// }