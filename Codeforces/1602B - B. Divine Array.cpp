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

    ll t,i,j,n,q;
    cin>>t;
    while(t--){

    cin >> n;
    vector<int> a(n);
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    cin >> q;
    vector< pair<int,int> > v(q);
    for(i=0;i<q;i++){
        cin >> v[i].first >> v[i].second;
    }
    vector<vector<int>> ans(100010, vector<int>());
    ans[0] = a;
    j = 1;
    while(true){
        map<int,int> m;
      for(i=0;i<n;i++){
        m[a[i]]++;
         }
        vector<int> b = a;
        for(i=0;i<n;i++){
            a[i] = m[a[i]];
        }
        if(b == a) {
            break;
        }
        else
            ans[j++] = a;

    }
     for(i=0;i<q;i++){
    if(v[i].second >= j - 1)
        cout << ans[j - 1][v[i].first - 1] <<endl;
    else cout << ans[v[i].second][v[i].first - 1] <<endl;
   }
}

return 0;
}
