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
    cin >> t;
	while(t--){
		ll n, k, x;
		 cin>>n>>k>>x;
		if(k < x)
			cout <<"-1\n";
		else{
			int val=0, i;
			for(i=1; i<=n; i++){
				if(val == x)
					val = 0;
				cout << val << " ";
				val++;
			}
			cout<<endl;
		}
	}

return 0;
}
