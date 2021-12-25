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

    ll t,i,j,sum,n,in;
    cin>>t;
    while(t--){
            sum=0;
        cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>in;
        sum+=in;
    }
    if(sum%n!=0)
        cout<<"1"<<endl;
    else
        cout<<"0"<<endl;

    }

return 0;
}
