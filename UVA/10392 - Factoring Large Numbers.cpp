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

    while(cin>>n && n>=0)
    {
        while(n%2==0)
        {
            cout<<"    2"<<endl;
            n/=2;
        }
        for(ll i=3; i*i<=n; i+=2)
        {
            while(n%i==0)
            {
                n/=i;
                cout<<"    "<<i<<endl;
            }
        }
        if(n>1)
            cout<<"    "<<n<<endl;
        cout<<endl;
    }
    return 0;
}
