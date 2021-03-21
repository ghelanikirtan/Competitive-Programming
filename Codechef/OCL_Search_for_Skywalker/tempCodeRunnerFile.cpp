//? Slicing Sticks  https://www.codechef.com/OCL2021/problems/OCLSTICK
#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    lli i,t;
    cin>>t;
    for (i = 0; i < t; i++){
        lli n,x=1;
        cin>>n;
        n -= 1;
        cout<<pow(2, n)<<"\n";  //funtion of cmath library
    }
    return 0;
}