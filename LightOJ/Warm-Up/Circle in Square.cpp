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

    ll i,j,t;
    double n,ans,pi = 2 * acos (0.0);
   // cout<<pi<<endl;
    std::cout << std::setprecision(2) << std::fixed;

    cin>>t;


    for(i=0;i<t;i++){
        cin>>n;
        ans=4*(n*n);
        ans=ans-(n*n*pi);

        cout<<"Case "<<i+1<<": "<<ans<<endl;
    }
return 0;
}
