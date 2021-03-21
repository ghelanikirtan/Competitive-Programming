#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for (int i = 0; i <t ; i++)
    {
        int n,a;
        cin>>n;     //123
        int sum=0;
        while (n!=0)    //123   /12     /1
        {
            a=n%10;     //3     /2      /1
            sum += a;   //3     /5      /6
            n /= 10;    //12    /1      /0(loop stops)
        }
        cout<<sum<<"\n";
    }
    return 0;
}