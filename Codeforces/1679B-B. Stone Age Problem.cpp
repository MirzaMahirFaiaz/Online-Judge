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

    ll n, q, i, ans = 0;
    cin >> n >> q;
    ll arr[n+1];
    for(i = 1; i <= n; i++){
        cin >> arr[i]; ans+=arr[i];
    }

    ll x, y, z;
    map< ll,ll > mm;

    ll current = -1;
    while(q--){
        cin >> x;
        if(x == 2){
            cin >> z;
            ans = n*z;
            cout<<ans;
            mm.clear();
            current = z;
        }
        else{
            cin >> y >> z;
            if(current == -1){
                ans-=arr[y]; ans+=z; arr[y] = z;
                cout<<ans;
            }
            else{
                if(mm[y] == 0) {
                    ans-=current;
                    ans+=z;
                    cout<<ans;
                    mm[y] = z;
                }
                else{
                    ans-=mm[y];
                    ans+=z;
                    mm[y] = z;
                    cout<<ans;
                }
            }
        }

        cout<<endl;
    }
    return 0;
}
