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
    cin>>t;
    while(t--){
        string s;
        cin >> n >> s;
        ll ans = n + 1;
        for (i = 0;i< 26;i++) {
            ll l = 0, r = n - 1, cnt = 0;
            while (l <= r) {
                if (s[l] == s[r]) {
                    l++;
                    r--;
                }
                else if (s[l] == char('a' + i)) {
                    cnt++;
                    l++;
                }
                else if (s[r] == char('a' + i)) {
                    cnt++;
                    r--;
                }
                else {
                    cnt = n + 1;
                    break;
                }
            }
            ans = min(ans,cnt);
        }
        if (ans == n + 1)
            ans =-1;
        cout<<ans<<endl;
    }

return 0;
}
