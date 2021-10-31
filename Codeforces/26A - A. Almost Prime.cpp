//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;
ll arr[3005];

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j=0,n,k=0,cnt=0;

    cin>>n;

    for(i=2; i<=n; i++){
        if(arr[i]==0){
            for(j=i; j<=n; j+=i)
                arr[j]++;
        }

      if(arr[i]==2)
        cnt++;
    }
    cout<<cnt<<endl;

return 0;
}
