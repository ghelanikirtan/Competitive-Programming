//? Chef and Groups https://www.codechef.com/MARCH21C/problems/GROUPS
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int i,t;
//     cin>>t;
//     for(i=0; i<t; i++){
//         string s;
//         cin>>s;
//         int count=0,x=0,y=0;
//         for(int i = 0; i < s.length(); i++){
//             if(s[i] == '1'){
//                 x++;
//                 if(x == 2){
//                     y++;
//                     x = 0;
//                 }
//                 else if(s[i+1] !='1' && x!=2){
//                     count++;
//                 }
//             }
//             if(s[i] == '0'){
//                 x = 0;
//             }
//         }
//         cout<<y+count<<"\n";
//     }    
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,t;
    cin>>t;
    for(i=0; i<t; i++){
        string s,s1 = {'0'};
        cin>>s;
        if(s[s.length()-1] == '1'){
            s = s + s1;
        }
        int count = 0, x = 0;
        for(int i = 0; i< s.length(); i++){
            if(s[i] == '1'){
                x++;
            }
            if(s[i] != '1' ){
                if(x>0){
                    count++;
                    x=0;
                }
            }
        }
        cout<<count<<"\n";
    }
        
    return 0;
}