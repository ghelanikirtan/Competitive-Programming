#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,b,area,perimeter;
    cin>>l>>b;

    area = l*b;
    perimeter = 2 * (l+b);

    if(area > perimeter)
    cout<<"Area\n"<<area;
    else if(area < perimeter)
    cout<<"Peri\n"<<perimeter;
    else if(area == perimeter)
    cout<<"Eq\n"<<area;

    return 0;
}