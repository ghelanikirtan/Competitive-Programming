#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,t;
    cin>>t;
    for (i = 0; i < t; i++){
        long long int quantity,price;
        long double expense,disc;
        cin>>quantity>>price;
        if(quantity <= 1000)
            expense = quantity*price;
        else{
            expense = quantity*price;
            disc = expense /10;
            expense -= disc; 
        }
        cout<<fixed<<setprecision(6)<<expense<<"\n";
    }
    return 0;
}