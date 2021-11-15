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

    ll t,i,j,n,in,u,d;
    vector<int>vec;
    cin>>t;
    for(j=1;j<=t;j++)
    {
        u=d=0;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>in;
            vec.push_back(in);
        }
        for(i=0; i<n-1; i++)
        {
            if(vec[i]>vec[i+1])
                d++;
            else if(vec[i]<vec[i+1])
                u++;
        }
        cout<<"Case "<<j<<": "<<u<<" "<<d<<endl;
    vec.clear();
    }
    return 0;
}
