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
    n++;
    int ar[n];
    int ar1[n];
    for(i=1;i<n;i++){
        cin>>ar[i];
        ar1[ar[i]]=i;
    }
    cout<<ar1[1];
     for(i=2;i<n;i++){
        cout<<" "<<ar1[i];
     }
cout<<endl;


return 0;
}
