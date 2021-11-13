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

    vector<int> vec;

    ll t,i,j,in,a,b;
    cin>>t;
    while(t--)
    {
        cin>>in;
        vec.push_back(in);
    }
    ll cnt= 0,flag;
    ll sz = vec.size();
    for(i=0; i<sz; i++)
    {
        for(a=1; a<250; a++)
        {
            flag=0;
            for(b=1; b<250; b++)
            {
                ll res =(4*a*b) + 3*a + 3*b;
                if(res == vec[i])
                {
                    cnt++;
    //cout<< a<<" "<< b<<endl;
                    flag=1;
                    break;
                }

            }
            if(flag==1)
                break;
        }
    }

    cout<<sz-cnt<<endl;
    return 0;
}
