#include<iostream>
#include<iomanip>
using namespace std;
    long long int x;
    long double y;
    long double bal;
    long double z = 0.50;

int main()
{
    cin>>x>>y; 
    // float z=0.50;
    // a = x%5;  
    if (x>0)
    {
        if (x%5==0 && (x+0.50)<(y-0.50))
        {
            cout<<fixed<< setprecision(2) << (y-float(x))-0.50; 
        }
        else
        {    
            cout<<fixed<<setprecision(2)<<y;
        }
    }
    else{
        cout<<fixed<<setprecision(2)<< (y - 0.50);
    }


    return 0;
}