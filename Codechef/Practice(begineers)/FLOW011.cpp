//? Gross Salary   https://www.codechef.com/problems/FLOW011

#include<bits/stdc++.h>
#define lli long long int
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    fastio

    int t;
    cin>>t;
    while(t--){

        int basic_salary;
        cin>>basic_salary;
        double HRA, DA, gross_salary;
        if(basic_salary >= 1500){
            HRA = 500;
            DA = (double(basic_salary))*98;
            DA /= 100;
        }
        else if(basic_salary < 1500){
            HRA = (double(basic_salary))*10;
            HRA /= 100;
            DA = (double(basic_salary))*90;
            DA /= 100; 
        }        
        gross_salary = basic_salary + HRA + DA;
        cout<<fixed<<setprecision(2)<<gross_salary<<"\n";
        // cout<<fixed<<gross_salary<<"\n";
    }
    return 0;
}