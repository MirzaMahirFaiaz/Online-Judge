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
        int n;
        cin>>n;
        int ar[n+3];
        int ans = 0;
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
            ans+=ar[i]-1;
        }
        if(ans%2==1)
            cout<<"errorgorn"<<endl;
        else
         cout<<"maomao90"<<endl;
    }



return 0;
}
