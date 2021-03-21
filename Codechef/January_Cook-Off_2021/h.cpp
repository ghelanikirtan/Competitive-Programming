#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    bool arr[1000001];
    memset(arr, 1, sizeof(arr));
    arr[0] = arr[1] = 0;
    for(int i = 2; i*i <= 1000000; i++)
    {
        if(arr[i] == 1)
        {
            for(int j = i*i; j <= 1000000; j += i)
                arr[j] = 0;
        }
    }
    int c_arr[1000001];
    c_arr[0] = c_arr[1] = c_arr[2] = 0;
    int sm = 0;
    int prev = 2;
    for(int i = 3; i <= 1000000; i++)
    {
        if(arr[i] == 1)
            {
                
                if(i-prev == 2)
                {
                    // cout << prev << "-" << i << endl;
                    sm++;
                }

                prev = i;
            }
            c_arr[i] = sm;
    }
    // for(int i = 0; i <= 10; i++)
    //     cout << arr[i] << " ";
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        cout << c_arr[n] << endl;
    }
}
