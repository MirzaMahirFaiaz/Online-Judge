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

    cin>>n;

    ll ar[100][100],v = 0;

    for(i = 0;i<2*n-1;++i){
        for(int r = 0;r<=i && r<n;r++){
            ll c = i-r;
            if(c>=0 && c<n)
                ar[r][c] = ++v;
        }
    }

    for(i=0;i<n;++i){
        for(j = n-1;j>=0;--j)
            cout<<ar[i][j]<<" ";
       cout<<endl;
    }

return 0;
}
