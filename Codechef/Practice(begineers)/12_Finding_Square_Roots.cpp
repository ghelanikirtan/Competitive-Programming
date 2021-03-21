#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int i,t;
    cin>>t;
    for(i = 1; i <= t; i++){
        int n;
        cin>>n;
        n = sqrt(n);
        cout<<n<<"\n";    
    }
    return 0;
}