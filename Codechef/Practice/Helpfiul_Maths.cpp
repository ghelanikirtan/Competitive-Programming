#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n = s.length();
    vector<int> v;
    vector<char> v1;
    for (int i = 0; i < n; i++)
    {
        s.copy(, i);
    }
    
    cout<<n;
    vector<int> :: iterator it;
    char a = '+';
    for (it = v.begin(); it < v.end(); it++)
    {
        int in;
        cin>>in;
        v.push_back(in);
        v1.push_back(a);
    }
    // for (it = v.begin(); it < v.end(); it++)
    // {
    //     cout<<*it<<" ";
    // }


    return 0;
}