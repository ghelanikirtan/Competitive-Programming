#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,t;
    cin>>t;
    for(i=1; i<=t; i++){
        long long int n=1,fact,j;
        cin>>fact;
        for (j = 1; j <= fact; j++){
            n *= j; 
        }
        cout<<n<<"\n";
    }

    return 0;
}