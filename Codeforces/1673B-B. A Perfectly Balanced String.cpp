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
    while(t--)
    {
        string a;
        cin >> a;
        bool no = false;
        ll digit = 0, i;
        int inx1[150] = {0};
        ll sz = a.size();
        for(i = 0; i < sz; i++)
        {
            inx1[a[i]]++;
            if(inx1[a[i]] == 1)
            {
                digit++;
            }
        }

        list<int > p[150];
        sz = a.size();
        for(i = 0; i < sz; i++)
        {
            p[a[i]].push_back(i);
            if(p[a[i]].size() >= 2)
            {
                if( i - *(p[a[i]].begin()) < digit )
                {
                    no = true;
                    break;
                }
                else
                {
                    p[a[i]].pop_front();
                }
            }
        }
        if(no)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

    }

    return 0;
}
