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

    ll t,i,j,n,m,r,p;
        string nam;

        cin>>n>>m;
        priority_queue<pair<ll,string>> pq[m];

        for(i=0;i<n;i++)
        {
            cin>>nam>>r>>p;
            pq[r-1].push(make_pair(p,nam));
        }

        pair<ll,string> a,b,c;
        for(i=0;i<m;i++)
        {
            a=pq[i].top();
            pq[i].pop();
            b=pq[i].top();
            pq[i].pop();
            c=pq[i].top();
            if(b.first==c.first && pq[i].empty()==false)
                cout<<"?"<<endl;
            else
                cout<<a.second<<" "<<b.second<<endl;

        }
return 0;
}
