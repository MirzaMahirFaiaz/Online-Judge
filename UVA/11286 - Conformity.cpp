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

    ll t,i,j,in,cnt,n;


 	while (true){
		int n;
		cin >> n;
		if (n == 0)
			break;
		map<vector<int>, int> mp;
		map<vector<int>, int>::iterator it;
		int mx = 1;
		while (n--){
			vector<int> vec(5);
			for(i=0;i<5;i++)
				cin >> vec[i];
			sort(vec.begin(), vec.end());
			mp[vec] += 1;
			mx = max(mx, mp[vec]);
		}
		int cnt = 0;
		for (it = mp.begin(); it != mp.end(); it++){
			if (mx == (*it).second)
				cnt += (*it).second;
		}

		cout << cnt << endl;
	}

return 0;
}
