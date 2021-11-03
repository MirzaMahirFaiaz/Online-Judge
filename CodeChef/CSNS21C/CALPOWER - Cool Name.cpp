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
    string str;
    cin>>t;

    while(t--){
            cin>>str;
        ll ans = 0;
        sort(str.begin(),str.end());

        ll len =str.size() ;

        for(i = 0 ; i < len ; i++)
        {
            j=i + 1 ;
            ans+= j  * (str[i] - 'a' +1) ;
        }
        cout << ans << endl;
    }

return 0;
}
