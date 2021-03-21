// Body Mass Index
// https://www.codechef.com/CCRC21C/problems/BMI
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,t;
    cin>>t;
    for (i = 0; i < t; i++){
        int bmi,h,m;
        cin>>m>>h;
        bmi = h*h;
        bmi = m/bmi;
        if(bmi <= 18)
        cout<<1<<"\n";
        else if(19 <= bmi && bmi <= 24)
        cout<<2<<"\n";
        else if(25 <= bmi && bmi <= 29)
        cout<<3<<"\n";
        else if(bmi >= 30)
        cout<<4<<"\n";
    }
    return 0;
}