//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

double x[100],y[100];
double dist(ll i,ll j){
    return sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j,n;
     double r;
    cin>>n>>r;

    for(i = 0;i<n;i++)
        cin>>x[i]>>y[i];

    double ans = (2*acos(-1.0)*r)+dist(n-1,0);

    for(i = 1;i<n;i++)
        ans +=dist(i-1,i);

        cout << std::fixed;
        cout<< setprecision(2)<<ans<<endl;

return 0;
}
