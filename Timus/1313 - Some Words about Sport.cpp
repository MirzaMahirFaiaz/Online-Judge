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

    int M[101][101];

    for(i = 0;i<n;++i)
        for(j = 0;j<n;j++)
            cin>>M[i][j];

    for(i = 0;i<2*n-1;++i){
        for(t= 0;t<=i && t<n;++t){
            ll r = i-t;
            if(r>=0 && r<n)
                cout<<M[r][t]<<" ";
        }
    }


return 0;
}
