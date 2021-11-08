//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;
ll binpow(ll a, ll b, ll m) {
    a %= m;
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a*a % m;
        b >>= 1;
    }
    return res;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j,n;
    cin>>t;
    while(t--){
        cin>>n;
        ll ans, n1;
		if(n < 3) {
			cout << n << endl;
			continue;
		}
		if(n%3 == 1) {
			n1 = (n - 4) / 3;
			ans = 4*binpow(3,n1,1000000007);	
		}
		else if(n%3 == 2){
			n1 = (n-2)/3;
			ans = 2*binpow(3,n1,1000000007);
		}
		else
			ans = binpow(3,n/3,1000000007);
		ans %= 1000000007;
		cout <<ans<< endl;
    }

return 0;
}
