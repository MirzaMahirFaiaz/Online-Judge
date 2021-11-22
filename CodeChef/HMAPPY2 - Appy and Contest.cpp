//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;
ll GCD(ll a, ll b )
{
    while ( b )
    {
        a = a % b;
        swap ( a, b );
    }
    return a;
}
ll LCM(ll a, ll b){
    return (a/GCD(a,b))*b;

}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j,n,a,b,k;
    cin>>t;
    while(t--){
        cin>>n>>a>>b>>k;
        j = LCM(a,b);
        i = (n/a);
        i += (n/b);
        i-=(2*(n/j));
        if(i>=k){
            cout<<"Win"<<endl;
        }
        else
            cout<<"Lose"<<endl;
    }

return 0;
}
