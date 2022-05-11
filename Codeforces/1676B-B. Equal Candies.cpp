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
    while(t--)
    {
        ll n,sum=0;
        cin>>n;
        vector<int>a;
        for(i=0; i<n; i++)
        {
            cin>>j;
            a.push_back(j);
            sum+=j;
        }
        sort(a.begin(),a.end());
        ll sz = a.size();
        sz--;
        if(a[0]== a[sz])
            cout<<"0"<<endl;
        else
            cout<<sum-(n*a[0])<<endl;
    }


    return 0;
}
