#include <bits/stdc++.h> 
using namespace std;
#define ll long long int
#define llv vector<long long int>
#define line cout<<"\n"
#define MOD 1000000007
#define forloop for(i=0;i<n;i++)
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0);

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	   ll b,i,n;
	   cin>>n;
	   ll a[n];
	   for(i=0;i<n;i++)
	   {
	       cin>>a[i];
	   }
	   /*
	   for(i=0;i<n;i=i+2)
	   {
	       b=a[i];
	       a[i]=a[i+1];
	       a[i+1]=b;
	   }
	   */
	   
	   
	   for(i=0;i<n;i++)
	   {
	       a[i]=a[i]%3 + a[i];
	   }
	   
	  /* for(i=0;i<n;i++)
	   {
	     b=a[i];
	     a[i]=a[n-1-i];
	     a[n-1-i]=b;
	   } */
	   
	   sort(a,a+n);
	   
	   ll m,max=0,min=0;
	   cin>>m;
	   
	   for(i=0;i<n;i++)
	   {
	       if(a[i] > m)
	       {
	           max=a[i];
	           if(a[i-1]!=m && i-1>=0)
	           {
	               min=a[i-1];
	           }
	           else
	           {
	               if(a[i-1]==m && i-2>=0)
	               {
	                   min=a[i-2];
	               }
	               else
	               min=-1;
	           }
	           break;
	       }
	       
	   }
	   if(i>=n)
	   {
	       max=-1;
	       if(a[n-1]!=m && i-1>=0)
	       min=a[n-1];
	       else
	       {
	           if(i-2>=0)
	           min=a[n-2];
	           else
	           min=-1;
	       }
	   }
	   
	   cout<<min<<" "<<max<<"\n";
	}
}
