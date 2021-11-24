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

    ll t,i,j,n,b,h,w,p,m;

    cin>>t;
    while(t--){
        cin>>n>>b;
        m=-9999;
        while(n--){
            cin>>h>>w>>p;
            if(p<=b){
                    w= w*h;
                if(m<w)
                    m=w;
            }
        }
        if(m<0)
            cout<<"no tablet"<<endl;
        else
        cout<<m<<endl;
    }
return 0;
}
