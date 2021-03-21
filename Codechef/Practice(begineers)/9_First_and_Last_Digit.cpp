#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    for (i = 0; i < t; i++){
        int n,a,sum;
        cin>>n;
        vector<int> v;
        while (n!=0){
            a=n%10;
            v.push_back(a);
            n /= 10;
        }
        sum= *v.begin() + *v.rbegin();
        cout<<sum<<"\n";
    }
    return 0;
}