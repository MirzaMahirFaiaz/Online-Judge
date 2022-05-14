//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j;
    cin>>t;
    while(t--){
            ll n;
        cin>>n;
        if(n<4 || n%2!=0)
            cout<<"-1"<<endl;
        else{
            if(n%6==0)
                cout<<n/6<<" ";
            else
                cout<<(n/6)+1<<" ";

            if(n%4==0)
                cout<<n/4<<endl;
            else
                cout<<(n/4)<<endl;

        }

    }

return 0;
}
