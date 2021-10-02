//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main()
{
    //amra jani, number of diagonal= (numberofside C 2)- numberofside

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i=1,j,ans,n;

    while(1){

        cin>>n;
        if(n==0)
            return 0;
        ans=ceil(sqrt(9+(8*n)));
        ans+=3;
        cout<<"Case "<<i++<<": "<<(ans+1)/2<<endl;
    }

return 0;
}
