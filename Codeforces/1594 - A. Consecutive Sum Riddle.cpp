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

    ll t,i,j,n;
    double ans;
    cin>>t;
    while(t--){
        cin>>n;

        if(n!=1)
        cout<<"-"<<n-1<<" "<<n<<endl;
        else
        cout<<n-1<<" "<<n<<endl;

    }
return 0;
}
