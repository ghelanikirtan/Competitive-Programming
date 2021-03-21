//? CHEF and Family https://www.codechef.com/CTLS2021/problems/ITER1
// #include<bits/stdc++.h>
// #define lli long long int
// using namespace std;

// int main(){
//     int i,t;
//     cin>>t;
//     for(i=0; i<t; i++){
//         lli m,c;
//         cin>>m>>c;
//         cout<<(m/c)<<"\n";
//     }
//     return 0;
// }

//? CHEF AND STRINGS https://www.codechef.com/CTLS2021/problems/ITER4
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int i,t;
//     cin>>t;
//     for(i=0; i<t; i++){
        
//         string s1,s2;
//         cin>>s1>>s2;
//         int a[26]={0}, b[26]={0}, count = 0;
//         for(int i = 0; i<s1.length(); i++){
//             int in;
//             in = int(s1[i] - 'a');
//             a[in]++;
//         }
//         for(int i = 0; i<s2.length(); i++){
//             int in;
//             in = int(s2[i] - 'a');
//             b[in]++;
//         }
//         for(int i = 0; i<26; i++){
//             if(a[i] != 0 && b[i] == 0 )
//                 count++;
//             if(a[i] == 0 && b[i] != 0 )
//                 count++;
//         }
//         cout <<count<<"\n";
//     }
//         return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     // int i,t;
//     // cin>>t;
//     // for(i=0; i<t; i++){
//         string s1,s2;
//         cin>>s1>>s2;
//         string s = s1 + s2;
//         int count = 0,n = s.length();
//         sort(s.begin(), s.end());
//         for(int i = 0; i<n; i++){
//             char a = s[i];
//             for(int j = 0; j<n; j++){
//                 if(s[j] != a )
//                 count ++;
//             }
//             // if(s[i] == s[i+1]){
//             //     cout<<s[i]<<" ";
//             // }
//             // else
//             //     count++;
            
//         }
//         cout<<count<<"\n";
//         // cout<<s;
//     // }
//     return 0;
// }
    

//! CHEF AND BABY https://www.codechef.com/CTLS2021/problems/ITER5
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
    
//     return 0;
// }

//? CHEF AND SCHOOL  https://www.codechef.com/CTLS2021/problems/ITER3
// #include<bits/stdc++.h>
// #define lli long long int 
// using namespace std;

// int main(){
//     int i,t;
//     cin>>t;
//     for(i=0; i<t; i++){
//         lli n,k,m, count = 0;
//         cin>>n>>k>>m;
//         lli assistant[n], chef[n];
//         for(lli i = 0, j = 0; i < (n+n); i++){
//             if(i<n)
//                 cin>>assistant[i];
//             else{
//                 cin>>chef[j];
//                 j++;
//             }
//         }
//         for(lli i = 0; i<n; i++){
//             lli diff = llabs(assistant[i] - chef[i]);
//             if(diff > k)
//                 count++;
//         }
//         if(count > m)
//         cout<<0<<"\n";
//         else
//         cout<<1<<"\n";
//     }
//     return 0;
// }

//?