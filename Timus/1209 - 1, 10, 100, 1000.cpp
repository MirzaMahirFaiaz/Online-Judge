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
	ll ar[n];

	for(i=0;i<n;i++)
		cin>>ar[i];

	for(i=0;i<n;i++){
            ll tmp = (ll)sqrt((8*ar[i]-7)+0.5);
		if((8*ar[i]-7)== tmp*tmp)
            cout<<"1 ";
		else
            cout<<"0 ";
	}
	cout<<endl;

return 0;
}
