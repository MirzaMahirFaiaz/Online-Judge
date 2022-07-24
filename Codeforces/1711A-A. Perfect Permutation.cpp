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
    cin>>t;
    while(t--){
            cin>>n;
        if(n==1){
            cout<<n<<endl;
        }
        else {
            for(i=2;i<=n;i++)
                cout<<i<<" ";
            cout<<1<<endl;
        }
    }



return 0;
}
