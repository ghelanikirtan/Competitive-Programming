//? Counting Pretty Numbers  https://www.codechef.com/problems/NUM239

#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,t;
    cin>>t;
    for(i=0; i<t; i++){
        int a,b, sum = 0;
        cin>>a>>b;
        for(int i = a; i <= b; i++){
            if(i%10 == 2 || i%10 == 3 || i%10 == 9)
                sum++;
        }
        cout<<sum<<"\n";
    }
    return 0;
}