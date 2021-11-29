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

    ll t,i,j,in,high,n;
    cin>>t;
    while(t--){
        cin>>n;
        high=0;
        for(i=0;i<n;i++)
        {
            cin>>in;
            high+= in-1;
        }
        cout <<high+1<<endl;
    }
return 0;
}
