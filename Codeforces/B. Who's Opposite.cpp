//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;
B. Who's Opposite.cpp
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j,a,b,c,h,f;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        if(a<b)
        {
            h=a;
            a=b;
            b=h;
        }
        h= a-b;
        f=2*h;
        if(c>f||(h<b)||f<a)
            cout<<"-1"<<endl;
        else{
            if(c>h){
                    f= c-h;
                cout<<f<<endl;
            }
            else{
                    f=c+h;
                cout<<f<<endl;
            }
        }
    }

return 0;
}

