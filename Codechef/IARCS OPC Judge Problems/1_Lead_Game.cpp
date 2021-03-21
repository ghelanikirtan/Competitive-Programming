//? Lead Game  https://www.codechef.com/IARCSJUD/problems/LEADGAME
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int p1[n],p2[n],d, player1 = 0 , player2 = 0,win = 0, l=0;
//     // vector<int> v;
//     for(int i = 0; i<n; i++){
//         cin>>p1[i];
//         cin>>p2[i];
//         player1 += p1[i];
//         player2 += p2[i];
//         d = player1 - player2;
//         // d = p1[i] - p2[i];
//         // v.push_back(d);
//         if(d > l){
//             l = d;
//             win = 1;
//         }
//         else if((-1)*d >l){
//             l = (-1)*d;
//             win = 2;
//         }
//     }
//     // sort(v.begin(), v.end());
//     // player1 = *v.rbegin();
//     // player2 = (-1)*(*v.begin());
//     // if(player1 > player2){
//     //     cout<<1<<" "<<player1;
//     // }
//     // else
//     // cout<<2<<" "<<player2;
//     cout<<win<<" "<<l;
//     return 0;
// }
