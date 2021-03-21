#include<iostream>
using namespace std;

int main()
{
    int i,t;
    cin>>t;
    for(i=1; i<=t; i++){
        int j,f;
        cin>>f;
        long long int n=1;
        for(j=1; j<=f; j++){
            n *= j;
        }
        cout<<n<<"\n";
    }
    return 0;
}   