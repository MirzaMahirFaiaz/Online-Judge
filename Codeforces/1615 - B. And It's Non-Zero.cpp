//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;
ll tmp_arr[200001][20];

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j;
     for(i = 1; i <= 200000; i++){
        ll tmp = i, idx = 0;
        while(tmp){
            tmp_arr[i][idx++] += (tmp%2);
            tmp/=2;
        }
        for(j = 0; j < 20; j++){
            tmp_arr[i][j] += tmp_arr[i-1][j];
        }
    }

    cin >> t;
    while (t--)
    {

        ll l, r;
        cin >> l >> r;

        vector<ll> temp(20, 0);
        ll maxx = 0;

        for(i = 0; i < 20; i++){
            maxx = max(maxx, tmp_arr[r][i] - tmp_arr[l-1][i]);
        }

        cout << (r-l+1-maxx) << endl;

    }

return 0;
}
