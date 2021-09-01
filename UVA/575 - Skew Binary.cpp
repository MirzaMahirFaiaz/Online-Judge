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

    ll t,i,j,k,ans;
    string s;
	while (1) {
		getline(cin,s);
		if (s=="0")
			return 0;

		k = s.size();
		i = 0;
		ans = 0;
		while (k > 0) {
			ans += (s[i] - '0') * (pow(2, k) - 1);
			k--;
			i++;
		}
		cout<<ans<<endl;
	}
return 0;
}
