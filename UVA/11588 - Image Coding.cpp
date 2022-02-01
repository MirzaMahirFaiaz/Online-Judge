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

    ll t,i,j,r, c, m, n,cs=0;
    cin>>t;
    while(t--){
         cin>>r>>c>>m>>n;
        string s;
        int cnt[26] = {};
        for(j = 0; j < r; j++) {
            cin>>s;
            for(i = 0; s[i]; i++)
                cnt[s[i]-'A']++;
        }
        ll mx = 0, mxi = 0;
        for(i = 0; i < 26; i++) {
            if(cnt[i] > mx)
                mx = cnt[i], mxi = 0;
            if(cnt[i] == mx)
                mxi++;
        }
        cout<<"Case "<<++cs<<": "<<mx * mxi * m + (r*c - mx*mxi) * n<<endl;
    }
return 0;
}
