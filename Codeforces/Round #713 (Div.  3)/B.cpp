//? Almost  Rectangle   https://codeforces.com/contest/1512/problem/B

#include<bits/stdc++.h>
#define lli long long int
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    fastio

    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        char a[n][n];
        for(int i = 0; i < n; i++){
            for(int j =0; j<n; j++){
                cin>>a[i][j];
            }
        }
        int tempx=0, tempy=0;
        vector<int> x,y;
        // int x[2], y[2], k = 0;
        for(int i = 0; i < n; i++){
            for(int j =0; j<n; j++){
                if(a[i][j] == '*'){
                    x.push_back(i);
                    y.push_back(j);        
                    // x[k] = i; y[k] = j;
                    // k = 1;
                    // cout<<"x= "<<i<<" y= "<<j<<"  |";
                }
            }
            // cout<<"\n";
        }
        // int dif1_hori = abs(x[0]-x[1]);
        // int dif2_hori = abs(y[0]-y[1]);
        // int dif1_verti = abs(x[0]-y[0]);
        // int dif2_verti = abs(x[1]-y[1]);
        // int dif1_diag = abs(x[0]-y[1]);
        // int dif2_diag = abs(x[1]-y[0]);
        if(x[0] != x[1] && y[0] != y[1]){
            a[x[0]][y[1]] = '*';
            a[x[1]][y[0]] = '*';
        }
        else if(x[0] == x[1] && x[0] == n-1){
            a[x[0]-1][y[0]] = '*';
            a[x[1]-1][y[1]] = '*';
        }
        else if(x[0] == x[1]){
            a[x[0]+1][y[0]] = '*';
            a[x[1]+1][y[1]] = '*';
        }
        else if(y[0] == y[1] && y[0] == n-1 ){
            a[x[0]][y[0]-1] = '*';
            a[x[1]][y[1]-1] = '*';
        }
        else if(y[0] == y[1] && y[0] == 0){
            a[x[0]][y[0]+1] = '*';
            a[x[1]][y[1]+1] = '*';
        }
        else if(y[0] == y[1]){
            a[x[0]][y[0]+1] = '*';
            a[x[1]][y[1]+1] = '*';
        }
        
        for(int i = 0; i < n; i++){
            for(int j =0; j<n; j++){
                cout<<a[i][j];
            }
            cout<<"\n";
        }

    // cout<<"\n";
    }
    return 0;
}