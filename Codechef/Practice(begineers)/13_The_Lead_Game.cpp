#include <iostream>
using namespace std;

int main() {
	int t;
	int p1=0,p2=0,w,l=0;
	cin>>t;
	while(t--){   
	    int n1,n2;
	    cin>>n1>>n2;
	    p1+=n1;
	    p2+=n2;
	    if(llabs(p1-p2)>l){
	        l=llabs(p1-p2);
	        if(n1>n2)
	            w=1;
	        else
	            w=2;
	    }
	}
	cout<<w<<" "<<l<<endl;
	return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int i,n;
//     cin>>n;
//     int a[10000];
//     for(i=0; i<n; i++){
//         int p1,p2,lead;
//         cin>>p1>>p2;
//         if(p1 > p2){
//             lead = (p1-p2);
//         }
//         else 
//             lead = (p2-p1);

//         a[i] = lead;
//     }
//     sort(a, a+n);
//     cout<<a[n-1];
//     return 0;
// }