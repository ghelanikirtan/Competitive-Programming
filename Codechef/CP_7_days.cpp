//? Metrology Station https://www.codechef.com/CP7D2021/problems/CHEFTEMP
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int a[7],f[7], j= 0, sum=0;
//     for(int i = 0; i<14; i++){
//         if(i < 7)
//             cin>>a[i];
//         else{
//             cin>>f[j];
//             j++;
//         }
//     }
//     for(int i = 0; i<7; i++){
//         sum += labs(a[i] - f[i]);
//     }
//     cout<<sum<<"\n";
//     return 0;
// }

//? Lockdown https://www.codechef.com/CP7D2021/problems/CHEFBREA
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int i,t;
//     cin>>t;
//     for(i=0; i<t; i++){
//         int l,b,area;
//         cin>>l>>b;
//         int gcd;
//         area = l*b;
// /******************GCD/HCF******************/
//     // Method : 1 
//         // while(l != b){
//         //     if(l>b)
//         //     l = l-b;
//         //     else
//         //     b = b-l;
//         // }
//         // gcd = l;

//     // Method : 2
//         // int k;
//         // if(l>b)
//         // k = b;
//         // else 
//         // k = l;

//         // for(int i=1; i<=k; i++){
//         //     if(l%i == 0 && b%i ==0)
//         //     gcd = i;
//         // }

//     // Method : 3 
//         gcd = __gcd(l,b);

//         gcd *= gcd;
//         cout<<(area)/gcd<<"\n";
//     }
//     return 0;
// }

// 

//? String https://www.codechef.com/CP7D2021/problems/CHEFSTRN
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string s;
//     cin>>s;
//     for(int i = 0; i<s.length()-1;){    
//         if(s.at(i) == s.at(i+1)){
//             s.erase(i, 2);
//         }
//         else i++;
//         if(s.length()==0)
//             break;
//     }
//     if(s.length() == 0)
//     cout<<"Empty String\n";
//     else
//     cout<<s<<endl;
//     return 0;
// }

//? Cake https://www.codechef.com/CP7D2021/problems/CHEFAKE
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,d0 = 0,count = 0;
    cin>>n;
    char a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i] == '1') d0++;
    }
    cout<<d0<<" ";
    for(int d = 1; d<n; d++){
        count = 0;
        for(int j = 0; j<n; j++){
            if(a[j]=='1' && a[j+d]=='1' && d+j < n)
            count++;
        }
        cout<<count<<" ";
    }
    cout<<"\n";
    return 0;
}
