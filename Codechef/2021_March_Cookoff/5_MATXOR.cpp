//? Matrix XOR   https://www.codechef.com/COOK127C/problems/MATXOR

// #include<bits/stdc++.h>
// #define lli long long int
// #define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

// using namespace std;

// int main(){
//     //fastio

//     //int t;
//     //cin>>t;
//     //while(t--){

//         lli n, m, k, aij, temp_xor = 0;
//         cin>>n>>m>>k;
//         for(lli i = 1; i <= n; i++){
//             for(lli j = 1; j <= m; j++){
//                 aij = k + i + j;
//                 temp_xor = (temp_xor^aij);
//                 // cout << temp_xor << "  ";
//             }
//         }
//         cout<<temp_xor<<"\n";

//     //}
//     return 0;
// }
#include<bits/stdc++.h>
#define lli long long int
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
	fastio
	int t;
	cin>>t;
	while(t--)
	{
		lli n,m,k;
		cin>>n>>m>>k;
		
		// ll a = (k+2)^(k+n+m);
		lli a;
		
		if(n==m)
		{
			a = k+2;
			for (int i = 1; i < n; ++i)
			{
				a^= k+(2*(i+1)); 
			}
		}
		else if(min(n,m)==1)
		{
			a=k+2;
			for (int i = 1; i < n*m; ++i)
			{
				a^= k+2+i;
			}
		}

		else if(min(n,m)%2)
		{
			a = k+2;
			int minn,maxx;
			// cout<<a<<endl;;
			for (int i = 2; i < min(n,m); i+=2)
			{
				a^=k+2+i;
				minn=k+2+i;
				a^=k+n+m-i;
				maxx=k+n+m-i;
			}
			a^=k+n+m;

			for (int i = minn; i <= maxx; ++i)
			{
				a^=i;
			}
		}
		else if(min(n,m)%2 ==0)
		{
			a = k+2;
			// cout<<a<<endl;;
			for (int i = 2; i < min(n,m); i+=2)
			{
				a^=k+2+i;
				a^=k+n+m-i;
			}
			a^=k+n+m;
		}
		
		// a=9^10^11;
		cout<<a<<endl;

	}
    return 0;
}