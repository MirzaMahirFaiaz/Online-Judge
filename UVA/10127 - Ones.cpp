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

    ll t,i,j,n=0;
    while(cin>>n){
            int m=1;
            ll cnt=1;

            while(m%n){
                cnt++;
                m=m*10+1;
                m%=n;
            }
        cout<<cnt<<endl;
    }

return 0;
}
