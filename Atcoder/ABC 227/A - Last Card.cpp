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

    ll t,i,j,k,n,a;
    cin>>n>>k>>a;
    j= n-a+1;
    if(j==k)
        cout<<"1"<<endl;
    else if(j>k){
        i=a+k-1;
        cout<<i<<endl;
    }
    else{
        k=k-j;
        k%=n;
        if(k==0)
            cout<<n<<endl;
        else
        cout<<k%n<<endl;
    }
return 0;
}
