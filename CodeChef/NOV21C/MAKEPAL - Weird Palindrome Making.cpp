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

    ll t,i,j,n,b;
    cin>>t;
    while(t--){
            j=0;
        cin>>n;
        while(n--){
            cin>>i;
            if(i&1)
                j++;
        }
        cout<<j/2<<endl;
    }

return 0;
}
