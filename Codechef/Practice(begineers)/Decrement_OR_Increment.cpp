//? Decrement OR Increment  https://www.codechef.com/problems/DECINC
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%4 == 0)
    n++;
    else
    n--;

    cout<<n<<"\n"; 
    return 0;
}