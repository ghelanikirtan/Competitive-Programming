//? List of Books  https://www.codechef.com/IARCSJUD/problems/BOOKLIST
// #include<bits/stdc++.h>
// #define lli long long int
// using namespace std;

// int main(){
//     lli m,n,x;
//     cin>>m;
//     vector<int> v;
//     vector<int> :: iterator it;
//     for(int i = 0; i<m; i++){
//         lli in;
//         cin>>in;
//         v.push_back(in);
//     }
//     cin>>n;
//     lli a[n],y;
//     it = v.begin();
//     for(int i =0 ; i<n; i++){
//         // cin>>a[i];
//         cin>>x;
//         x -= 1;
//         a[i] = *(v.begin()+x);
//         v.erase(v.begin()+x);
//         // if(i == x-1){
//         // a[i] = (l.begin() + i);
//         // }
//         // l.erase(l.begin()+i);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }