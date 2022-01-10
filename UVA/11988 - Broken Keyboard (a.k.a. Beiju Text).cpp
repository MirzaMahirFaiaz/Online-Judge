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

    list<char> ls;
    list<char>::iterator it;
    while(getline(cin,str))
    {
        ls.clear();
        it = ls.begin();
        ll sz = str.size();
        for(i=0;i<sz;++i)
        {
            if(str[i]=='[')
                it = ls.begin();
            if(str[i]==']')
                it = ls.end();
            if(str[i]!='[' && str[i]!=']')
                ls.insert(it,str[i]);
        }
        for(it=ls.begin();it!=ls.end();it++)
            cout<<(*it);
        cout<<endl;
    }


return 0;
}
