//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;
vector<int>vec;

bool chk(ll mid)
{
    ll sz= vec.size();
    ll tmp=0;
    for(ll i=0; i<sz; i++)
    {
        if(mid>vec[i]-tmp)
        {
            tmp=vec[i];
        }
        else if(mid==vec[i]-tmp)
        {
            mid--;
            tmp=vec[i];
        }
        else
            return false;
    }
    //cout<<"chk true"<<emni<<endl;
    return true;
}

ll solve(ll high)
{
    ll mid,low=vec[0],ans;
    bool res;
    while(low<=high)
    {

        mid= (high+low)>>1;
       // cout<<"low "<<low<<"high "<<high<<"mid "<<mid<<endl;
        res = chk(mid);
        if(res)
        {
            ans= mid;
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return ans;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j,in,n;
    ll cs=1;

    cin>>t;
    while(t--)
    {
        cin>>n;

        for(i=0; i<n; i++)
        {
            cin>>in;
            vec.push_back(in);
        }
        cout<<"Case "<<cs<<": ";
        cs++;
        sort(vec.begin(),vec.end());

       cout<< solve(in)<<endl;
       vec.clear();


    }
    return 0;
}
