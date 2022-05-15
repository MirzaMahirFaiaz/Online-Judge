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

    ll t,i,j;
    cin>>t;
    while(t--){
        ll n;
        cin >> n;
        ll a[n], i, no = 0;
        for(i = 0; i < n; i++)
            cin >> a[i];
        ll x = a[0] - 1;
        ll y = a[0];
        ll z = a[0] + 1;

        for(i = 0; i < n; i++){
            if(x+1 < a[i]){
                no++;
                break;
            }
            x++;
        }
        for(i = 0; i < n; i++){
            if(y+1 < a[i]){
                no++;
                break;
            }
            y++;
        }
        for(i = 0; i < n; i++){
            if(z+1 < a[i]){
                no++;
                break;
            }
            z++;
        }
        if(no == 3)
         cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }

return 0;
}
