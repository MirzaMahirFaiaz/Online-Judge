//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int a[100005];
ll q[100005];
ll p[100005];

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m, k, i, l, r,x,y;

	cin >> n >> m >> k;
	for (i = 1; i <= n; ++i)
        cin >> a[i];

	vector<pair<int,int>>range(m + 1);
	vector<ll>val(m + 1);

	for (i = 1; i <= m; i++) {
		cin >> l >> r >> x;
		range[i] = { l,r };
		val[i] = x;
	}

	for (i = 1; i <= k; i++) {
        cin >> x >> y;
		q[x]++;
		q[y + 1]--;
	}

	for (int i = 1; i <= m; i++)
        q[i] += q[i - 1];

	for (i = 1; i <= m; i++)
		val[i] = val[i] * q[i];



	for (i = 1; i <= m; i++) {
		 l = range[i].first;
		 r = range[i].second;

		p[l] += (val[i]);
		p[r + 1] -= (val[i]);
	}

	for (int i = 1; i <= n; i++)
        p[i] += p[i - 1];
	for (int i = 1; i <= n; i++)
        cout << p[i] + a[i] << " ";


return 0;
}
