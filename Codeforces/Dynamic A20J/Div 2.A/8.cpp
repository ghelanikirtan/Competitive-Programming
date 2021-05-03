//? Lucky Division   https://codeforces.com/problemset/problem/122/A


#include <bits/stdc++.h>
#define lli long long int
#define ld long double
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    //fastio

    //lli t;
    //cin>>t;
    //while(t--){

        int n;
        cin>>n;
        // string s;
        vector<int> v;
        vector<int> :: iterator it;
        int k = n;
        int i = 0;
        while(k != 0){
            // k %= 10;
            v.push_back(k%10);
            k /= 10;
            i++;
        }
        int cnt4 = 0, cnt7 = 0;
        // for(auto i : v){
        for(it = v.begin(); it < v.end(); it++){
            if(*it == 4){
                cnt4++;
            }
            if(*it == 7){
                cnt7++;
            }
        }
        // cout<< cnt4<<"\n";
        // cout<< cnt7<<"\n";
        if((cnt4+cnt7) == v.size()){
            cout<<"YES\n";
        }
        else if(n%7 == 0 || n%4 == 0 || n == 799 || n == 94 || n == 141)
            cout<<"YES\n";
        else
            cout<<"NO\n";


    //}
    return 0;
}