// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n,budget;   
//     int cases = 0; //for output

//     cin>>n>>budget;;
//     vector<int> v;
//     int i;
//     for (i = 0; i < n; i++)
//     {
//         int in;
//         cin>>in;
//         v.push_back(in);
//     }
//     sort(v.begin(), v.end());
//     vector<int> :: iterator it;
//     // vector<int> ve;
//     for (it=v.begin(); it<v.end(); it++)
//     {
//         // if ((*it) > budget)
//         // {
//         //     break;
//         // }
//         // else{
//         //     budget = budget - (*it);
//         //     cases  += 1;
//         // }
//         if((*it) <= budget ){
//             budget -= (*it);
//             cases++;
//         }
//         else
//         break;
//     }
//     cout<<"  "<<cases;
//     return 0;
// }

/*******************Submitted*******************/

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int j,t;
//     cin>>t;
//     for(j = 1; j<=t; j++){
//         int n,budget;   
//         int cases = 0; //for output
    
//         cin>>n>>budget;;
//         vector<int> v;
//         int i;
//         for (i = 0; i < n; i++)
//         {
//             int in;
//             cin>>in;
//             v.push_back(in);
//         }
//         sort(v.begin(), v.end());
//         vector<int> :: iterator it;
//         // vector<int> ve;
//         for (it=v.begin(); it<v.end(); it++)
//         {
//             if ((*it) > budget)
//             {
//                 break;
//             }
//             else{
//                 budget = budget - (*it);
//                 cases  += 1;
//             }
            
//         }
        
//         cout<<"Case #"<<j<<":"<<" "<<cases<<"\n";
//     }
    
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int j,t;
    cin>>t;
    for(j=1;j<=t;j++){    
        int n,budget;   
        int cases = 0; //for output

        cin>>n>>budget;;
        int v[100000];
        int i;
        for (i = 0; i < n; i++)
        {
            int in;
            cin>>in;
            v[i] = in;
        }

        sort(v, v+n );
        for (i= 0; i<n; i++)
        {
            if(v[i] <= budget ){
                budget -= v[i];
                cases++;
            }
            else
            break;
        }
        cout<<"Case #:"<<j<<": "<<cases;
    }
        return 0;
}
