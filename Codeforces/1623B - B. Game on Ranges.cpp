//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
const int MAX = 1e3+5;
using namespace std;

map<pair<int,int>, bool>mp;
pair<int,int> a[MAX];
map<pair<int,int>, int>ans;

void solve(int st, int en) {
    if(st == en){
        ans[{st, en}] = st;
        return;
    }
    for (int i = st; i <= en; i++) {
        if (i == st) {
            if (mp[{i + 1, en}]) {
                ans[{st, en}] = i;
                solve(i + 1, en);
                break;
            }
        }else if(i == en){
            if(mp[{st, i - 1}]){
                ans[{st, en}] = i;
                solve(st, i - 1);
                break;
            }
        }else{
            if(mp[{st, i - 1}] && mp[{i + 1, en}]){
                ans[{st, en}] = i;
                solve(st, i - 1);
                solve(i + 1, en);
                break;
            }
        }
    }
}
ll n;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j;
    cin>>t;
    while(t--)
    {
        cin >> n;
        mp.clear();
        ans.clear();
        ll st = 1, en = n;
        for(i = 0; i < n; i++)
        {
            cin >> a[i].first >> a[i].second;
            mp[ {a[i].first, a[i].second}] = true;
        }
        solve(st, en);
        for(auto it : mp)
        {
            if(ans[it.first])
                cout << it.first.first << " " << it.first.second << " " << ans[it.first] << endl;
        }
        cout <<endl;
    }



    return 0;
}
