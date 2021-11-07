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

    ll t,i,j;
    double n;
    cin>>n;
    n*=1000;
    j=n;
    j=j%1000;
    n/=1000;
    if(j<500)
        cout<<(int)n<<endl;
    else
        cout<<((int)n)+1<<endl;

return 0;
}
