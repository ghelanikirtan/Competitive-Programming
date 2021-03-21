//? https://www.codechef.com/COOK126C/problems/PASSWD

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>t;
    for(n=0; n<t; n++){    
        string s;
        string ::iterator it;
        cin>>s;
        int x = int( *s.begin());
        int y = int( *s.rbegin());
        int condition1=0, condition2=0, condition3=0, condition4=0, condition5=s.length();

        if( 'a' <= x && 'z' >= x || 'a' <= y && 'z' >= y){ //condition of strictly inside
        condition1++;
        }   

        for(int i=1; i<(s.length()-1); i++){
            if(s[i] >= 'a' && 'z' >= s[i])
            condition1++;
            else if(s[i] >= 'A' && 'Z' >= s[i])
            condition2++;
            else if(s[i]>= '0' && '9' >= s[i])
            condition3++;
            else if(s[i] == '@'||s[i] == '#'||s[i] == '%'||s[i] == '&'||s[i] == '?')
            condition4++;
        }

        if(condition1>0 && condition2>0 && condition3>0 && condition4>0 && condition5>=10){
        cout<<"YES\n";}
        else 
        cout<<"NO\n";
    }
    return 0;
}
