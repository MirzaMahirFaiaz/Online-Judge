//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

void solve()
{
    string str,str1;
    cin>>str>>str1;
    sort(str.begin(),str.end());
    ll j,sz,i;

    if(str1=="abc")
    {
        if(str[0]!='a')
        {
            cout<<str<<endl;
            return;

        }
        j=0;
        sz= (int)str.size();
        for(i=0; i<sz-1; i++)
            if(str[i]=='b')
                break;
        sz= (int)str.size();

        for(j=i; j<sz-1; j++)
            if(str[j]=='c')
                break;
        sz= (int)str.size();
        while(j<sz&&str[j]=='c')
        {
            swap(str[i],str[j]);
            i++;
            j++;
        }
    }
    cout<<str<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
