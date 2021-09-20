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

    ll i,n;
    ll arr[50004];
    arr[1]=1;
    arr[2]=9;
    for(i=3;i<50002;i++){
        arr[i]=arr[i-1]+i*i*i;
    }

    while(scanf("%d",&n)!=EOF){
            cout<<arr[n]<<endl;
    }

return 0;
}
