//ANYONE PLEASE HELP ME WHAT'S WRONG WITH MY COMMENTED CODE
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
    
//     long long int t;
//     cin >> t;
//     while(t--){
//     long long int n;
//     cin >> n;
//     long long int arr[n];
// 	long long int max = INT_MIN;
// 	long long int min = INT_MAX;
// 	for(int i=0; i<n; i++){
// 	    cin >> arr[i];
// 	    if(arr[i] > max){
// 	        max = arr[i];
// 	    }
	    
// 	    if(arr[i]<min)
// 	    {
// 	        min=arr[i];
// 	    }
// 	}
	
// 	long long int ans = max-min;
// 	ans*=2;
// 	cout << ans << endl;    
//     }
// 	return 0;
// }
#include<bits/stdc++.h>
#define bc long long int
using namespace std;
int main(){
    bc num,t;
    cin>>t;
    for (num = 1; num <= t; num++)
    {
        bc n,arr[100000],i;
        bc x,y,z,j,arr1[100000];
        cin>>n;
        for(i=0; i<n; i++){
            bc in;
            cin>>in;
            arr[i]=in;
        }
        for(j=0; j < n-1; j++){
            x = arr[0+j];
            y = arr[0+j+1];
            z = llabs(x-y);
            arr1[j]=z;
        }
        bc last_case = llabs(arr[0]-arr[n-1]);  //Diff. b/w first and last
        cout<< accumulate(arr1, arr1 + n, 0) +last_case <<"\n";
    }
    return 0;
}
