//? Nobel Prize   https://www.codechef.com/START2C/problems/NOBEL
#include<bits/stdc++.h>
#define lli long long int
#define ld long doubld
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int remove_duplicate(int arr[], int n){
    if (n==0 || n==1)
    return n;

    int temp[n];

    int j = 0;
    int i;
    for (i=0; i<n-1; i++)
        if (arr[i] != arr[i+1])
        temp[j++] = arr[i];
        temp[j++] = arr[n-1];

    for (i=0; i<j; i++)
    arr[i] = temp[i];

    return j;
}



int main(){
    fastio

    int t;
    cin>>t;
    while(t--){

        int n, m;
        cin>>n>>m;
        int a[n];
        int i;
        for(i = 0; i < n; i++){
        cin >> a[i];
        }
        sort(a, a+n);
        n = remove_duplicate(a, n);
        // for (i=0; i<n; i++)
        // cout << a[i] << " ";
        int tot = (m)*(m+1)/2;
        for (int i = 0; i < n; i++){
            tot -= a[i]; 
        }
        if(tot > 0){
            cout<<"YES\n";
        }
        else
            cout<<"NO\n";
    
        

    }
    return 0;
}