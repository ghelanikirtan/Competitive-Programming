//? Interesting XOR! https://www.codechef.com/MARCH21C/problems/IRSTXOR
#include<bits/stdc++.h>
#define lli long long int 
using namespace std;

int main(){
    int i,t;
    cin>>t;
    for(i=0; i<t; i++){
        
        lli a,b,c,lower=0, upper=0, d, dif =0;
        cin>>c;

        lli arr[31];
        for (lli  i = 0; i < 31; i++)
        {
            arr[i] =  pow(2, i);
        }
        
        if(c > 2){    
            for(int i = 0; i<31; i++){
                if(c < arr[i] && arr[i-1] < c){
                    lower = arr[i-1];
                    upper = arr[i];
                    d = lower;
                    lower -= 1;
                    upper -= 1;
                    dif = c-d;
                    a = lower;
                    b = upper - dif;
                    cout<< a*b <<"\n";
                    break;
                }
                else if(c == arr[i]){
                    a = arr[i] - 1;
                    b = arr[i+1] - 1;
                    cout<<a*b<<"\n"; 
                }
            }
            // d = lower;
            // lower -= 1;
            // upper -= 1;
            // dif = c-d;
            // a = lower;
            // b = upper - dif;
            // cout<< a*b <<"\n";
        }
        else if(c == 2){
            cout<<3<<"\n";
        }
        else if(c == 1){
            cout<<0<<"\n";
        }
    }    
    return 0;
}



        // lli arr[31] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 33554432, 67108864, 134217728, 268435456, 536870912, 1073741824};