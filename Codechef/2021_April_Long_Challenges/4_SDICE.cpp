//? Chef and Dice   https://www.codechef.com/APRIL21C/problems/SDICE

#include<bits/stdc++.h>
#define lli long long int
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    fastio

    int t;
    cin>>t;
    while(t--){

        lli n, layers=0, dice_left =0, pips=0;
        lli last_2nd_layer, last_layer;
        cin>>n;
        if(n==1)
        cout<<20<<"\n";     //(2+3+4+5+6)*1 = 20
        else if(n==2)
        cout<<36<<"\n";     //(3+4+5+6)*2 = 36
        else if(n==3)
        cout<<51<<"\n";     //(3+4+5+6)*2 +(4+5+6)*1 = 51
        else if(n==4)
        cout<<60<<"\n";     //(4+5+6)*4 = 60
        else if(n > 4){
            layers = n/4;
            layers -= 1;
            pips = 44*layers;
            dice_left = n%4;
            last_layer = (4+5+6)*(4 - dice_left);
            last_2nd_layer = (5+6)*(dice_left);
            if(dice_left == 1)
                pips += last_2nd_layer + last_layer + 20;
            else if(dice_left == 2)
                pips += last_2nd_layer + last_layer + 36;
            else if(dice_left == 3)
                pips += last_2nd_layer + last_layer + 51;
            else if(dice_left == 0){
                pips += 60;
            }
            cout<<pips<<"\n";    
        }


    }
    return 0;
}