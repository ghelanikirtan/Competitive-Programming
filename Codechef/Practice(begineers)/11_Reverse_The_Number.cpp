#include <iostream>
using namespace std;

int main() {
	int no,t;
	cin>>t;
	for(no = 1; no <= t; no++){    
	    
	    int n,a[7],m=0;
	    cin>>n;
	    while(n>9)
	    {
	        if(n%10!=0)
	            break;
	        n/=10;
	    }
	    while(n>9)
	    {
	        a[m]=n%10;
	        n/=10;
	        m++;
	    }
	    a[m]=n;
	    for(int i=0;i<m+1;i++)
	    {
	        cout<<a[i];
	    }
	    cout<<endl;
	}
	
	return 0;
}

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main()
// {
//     int i,t;
//     cin>>t;
//     for (i = 0; i < t; i++)
//     {
//         int n,a;
//         cin>>n;
//         int j =n;
//         vector<int> v;
//         while(n!=0){
//             a=n%10;
//             v.push_back(a);
//             n/=10;
//         }
//         vector<int> :: iterator it;
//         for(it = v.begin(); it < v.end(); it++){
//             cout<< *it;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }