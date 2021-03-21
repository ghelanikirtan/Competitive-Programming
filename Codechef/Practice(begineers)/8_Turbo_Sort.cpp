// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main()
// {
//     int i,n;
//     cin>>n;
//     vector<int> v;
//     vector<int> :: iterator it;
//     for (i=0; i<n; i++){
//         int in;
//         cin>>in;
//         v.push_back(in);
//     }
//     sort(v.begin(),v.end());
//     for (it = v.begin(); it < v.end(); it++){
//         cout<<(*it)<<"\n";
//     }
    

//     return 0;
// }
#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

int main()
{
    int i,n;
    cin>>n;
    list<int> v;
    // list<int> :: iterator it;
    for (i=0; i<n; i++){
        int in;
        cin>>in;
        v.push_back(in);
    }
    // sort(v.begin(),v.end());
    // for (it = v.begin(); it  v.end(); it++){
        // cout<<(*it)<<"\n";
    // }
    v.sort();
    for (int j : v)
    {
        cout<<j<<"\n";
    }
    
    return 0;
}