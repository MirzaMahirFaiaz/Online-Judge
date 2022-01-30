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
    i = pow(2,31);
    j=i*(-1);
    i--;
    if(n<=i&&n>=j)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

return 0;
}
