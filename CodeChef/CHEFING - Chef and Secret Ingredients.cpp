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
    string str;
    cin>>t;
    while(t--){
         cin >> n ;
        ll mx = n ;
        ll temp[26] = {0} ;
        while(n--)
        {
            set <char> s;
            cin >>str;
            ll len = str.size() ;

            for(i=0;i<len;i++)
            {
                s.insert(str[i]);
            }

            for(auto it=s.begin();it!=s.end();it++)
            {
                temp[*it-'a']++ ;
            }

        }
        ll ans = 0;
        for(i=0;i<26;i++ )
        {
            if(temp[i] == mx) ans++;
        }

        cout<<ans<<endl;
    }

return 0;
}
