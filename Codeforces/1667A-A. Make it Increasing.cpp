//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
#define M 1e18

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j,n;
    cin >> n;
    ll a[n];
    for(i = 0; i < n; i++){
        cin >> a[i];
    }

    ll ans = M, x, y, sum;
    for(i = 1; i < n; i++){
        if(a[i] <= a[i-1]){
            //cout<< "M";
            x = 0;
            sum = 0;
            for(j = i-2; j >=0; j--){
                y = x/a[j];
                x = (y+1)*a[j];
                sum = sum + y+1;
            }
            x = 0;
            for(j = i; j < n; j++){
                y = x/a[j];
                x = (y+1)*a[j];
                sum = sum + y+1;
            }
            if(sum < ans)
                ans = sum;
        }

    }

    if(ans == M) cout<<n-1;
    else cout<<ans;



return 0;
}
