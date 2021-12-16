//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
#define MAX 100000007
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j,n;

    cin>>t;

    while(t--)
    {
        cin>>n;

        for(i=2; i<=n; i++)
        {
            if (__gcd(i,n-1) == 1)
            {
                cout << i << " " << n-1-i << " " << 1 <<endl;
                break;
            }
        }
    }
    return 0;
}
