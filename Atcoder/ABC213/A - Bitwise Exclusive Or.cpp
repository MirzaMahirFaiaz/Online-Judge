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

    ll t,i,j,a,b;
    cin>>a>>b;
    for(i=0;;i++){
           j=i^a;
        if(j==b)
        {
            cout<<i<<endl;
            break;
        }
    }
return 0;
}
