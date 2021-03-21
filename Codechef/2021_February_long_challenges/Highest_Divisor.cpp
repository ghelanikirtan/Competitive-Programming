#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n,i,j;
    cin>>n;
    vector<int> v;
    for(i=1; i<=n; i++){
        if(n%i==0){
            if(i<10)
            v.push_back(i);
        }
    }
    cout<< *v.rbegin();
    return 0;
}