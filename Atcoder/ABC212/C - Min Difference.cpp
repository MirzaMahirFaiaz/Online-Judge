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

    vector<int>a,b;

    ll t,i,j,n,m,min=INT_MAX;
    ll in;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>in;
        a.push_back(in);
    }
    for(i=0;i<m;i++)
    {
        cin>>in;
        b.push_back(in);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    i=0;
    j=0;
    while(i<n&&j<m){
        t=abs(a[i]-b[j]);
        if(t<min){
            min=t;
           //cout<<min<<" "<<a[i]<<" "<<b[j]<<endl;
        }
        if(a[i]<b[j])
            i++;
        else
            j++;
    }

    cout<<min<<endl;
return 0;
}
