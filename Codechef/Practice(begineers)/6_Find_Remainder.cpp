#include<iostream>
using namespace std;

int main()
{
    int i,t;
    cin>>t;
    for (i = 0; i < t; i++){
        int a,b,c;
        cin>>a>>b;
        c = a%b;
        cout<<c<<"\n";
    }
    return 0;
}