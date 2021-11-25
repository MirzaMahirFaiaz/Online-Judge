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

    ll t,i,j,n,in,sz;
    vector<ll>vec;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++){
            cin>>in;
            vec.push_back(in);
        }
        if(vec[0]==n || vec[vec.size()-1]==n)
        {
            if(vec[vec.size()-1]!=n)
                reverse(vec.begin()+1, vec.end());
            else
                reverse(vec.begin(),vec.end()-1);
            sz = vec.size();
            for(i=0; i<sz; i++)
                cout<<vec[i]<<" ";
            cout<<endl;
        }
        else
            cout<<"-1"<<endl;
            vec.clear();
    }
    return 0;
}
