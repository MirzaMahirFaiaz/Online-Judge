//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main()
{

    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    ll t,i,j;
    ll r,c;
    cin>>r>>c;
    int arr[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }

return 0;
}
