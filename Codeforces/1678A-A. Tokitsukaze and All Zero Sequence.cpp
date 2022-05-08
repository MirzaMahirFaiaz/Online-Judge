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
    ll ar[110];

    cin>>t;
    while(t--){

            ll n,z =0;
        set<int>st;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>ar[i];
    st.insert(ar[i]);
    if(ar[i]==0)
        z++;
        }
    if(z)
        cout<<(n-z)<<endl;
    else if(n== st.size())
        cout<<n+1<<endl;
        else
            cout<<n<<endl;

    }



return 0;
}
