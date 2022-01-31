//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main()
{

    // ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    ll t,j;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;
        ll cnt_0=0,cnt_1=0;
        ll sz = s.size();

        for(int i=0; i<sz; i++)
        {
            if(s[i]=='1')
                cnt_1++;
            else cnt_0++;
        }
        if(cnt_0==cnt_1 && cnt_0==1)
            cout<<"0"<<endl;
        else if(cnt_0==cnt_1 && cnt_0>1)
            cout<<cnt_0-1<<endl;
        else if(cnt_0>cnt_1)
            cout<<cnt_1<<endl;
        else
            cout<<cnt_0<<endl;
    }

    return 0;
}
