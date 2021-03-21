//? Identical Words https://www.codechef.com/LTC22021/problems/LTC05
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int i,t;
//     cin>>t;
//     for(i=0; i<t; i++){
//         string s1, s2, s3;
//         cin>>s1>>s2>>s3;
//         sort(s1.begin(), s1.end());
//         sort(s2.begin(), s2.end());
//         sort(s3.begin(), s3.end());
//         if(s1 == s2 && s1 == s3)
//         cout<<"Possible\n";
//         else
//         cout<<"Not Possible\n";
//     }
//     return 0;
// }

//! Complete the Sequence https://www.codechef.com/LTC22021/problems/LTC06
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     // int i,t;
//     // cin>>t;
//     // for(i=0; i<t; i++){
//         int n;
//         cin>>n;
//         n += 1;
//         int x;
//         x = (n-1);
//         x = x + (n-3); 
//         cout<<x;
        

//     // }    
//     return 0;
// }

//? Number Encoding https://www.codechef.com/LTC22021/problems/LTC07
// #include<bits/stdc++.h>
// #define lli long long int
// using namespace std;

// int main(){
//     int i,t;
//     cin>>t;
//     for(i=0; i<t; i++){
//         string s;
//         cin>>s;
//         lli x=1,y=1;
//         if(s.length() == 10){            
//             for(int i = 0; i<10; i++){
//                 if(s[i] >= '0' && '9' >= s[i]){
//                     if (s[i] >= '0' && '5'>= s[i]){     //3 Ways
// 				    	x *= 3;
// 				    }
// 				    else if (s[i] >= '6' && '9' >= s[i]){       //2 Ways
// 				    	y *= 2;
// 				    }
//                 }
//             }
//         }
//         cout<< x*y <<"\n";
//     }
//     return 0;
// }

//? Identifier Format https://www.codechef.com/LTC22021/problems/LTC04
#include<bits/stdc++.h>
using namespace std;

void cases(string s){
    if(s[0] >= 'A' && 'Z'>=s[0]){
        for(int i = 0; i< s.length(); i++){
            s[i] = char(s[i] + 32);
        }
    }
    cout<<s;
}

void Cases(string s){
    if(s[0] >= 'a' && 'z' >=s[0]){
        s[0] = char(s[0] - 32);
    }
    cout<<s;
}

void CASES(string s){
    if(s[0] >= 'a' && 'z' >=s[0]){
        for(int i = 0; i< s.length(); i++){
            s[i] = char(s[i] - 32);
        }
    }
    cout<<s;
}

void cAsEs(string s){
    if(s[0] >= 'A' && 'Z' >=s[0]){
        for(int i = 0; i< s.length(); i++){
            s[i] = char(s[i] + 32);
        }
    }
    for(int i = 1; i < s.length(); i+=2){
        s[i] = char(s[i] - 32);
    }
    cout<<s;
}

int main(){
    int i,t;
    cin>>t;
    for(i=0; i<t; i++){
        
    char ch;
    string s1,s2;
    cin>>ch>>s1>>s2;
        if(s1.length()>= 1 && s2.length() >= 1 && 25 >= s1.length() && 25 >= s2.length()){
            if(ch >= 'A' && 'H' >= ch){
                if(ch == 'A'){
                    cases(s1); Cases(s2); cout<<"\n"; 
                }
                else if(ch == 'B'){
                    cases(s1); cout<<"_"; cases(s2); cout<<"\n";
                }
                else if(ch == 'C'){
                    CASES(s1); cout<<"_"; CASES(s2); cout<<"\n";
                }
                else if(ch == 'D'){
                    Cases(s1); cout<<"-"; Cases(s2); cout<<"\n";
                }
                else if(ch == 'E' || ch == 'F' || ch == 'G' || ch == 'H'){
                    cAsEs(s1); cout<<"|"; cAsEs(s2); cout<<"\n";        
                }
            }
        }
    }
    return 0;
}