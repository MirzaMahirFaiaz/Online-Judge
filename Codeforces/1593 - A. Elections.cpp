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

    ll t,i,j,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        ll maxi = max(a,b);
        maxi = max(maxi,c);
        if(maxi>a)
            cout<<maxi-a+1<<" ";
        else{
                if(a==b||a==c)
                    cout<<"1"<<" ";
                else
                    cout<<"0"<<" ";
        }
        if(maxi>b)
        cout<<maxi-b+1<<" ";
        else{
            if(b==a||b==c)
                    cout<<"1"<<" ";
                else
                    cout<<"0"<<" ";
        }
        if(maxi>c)
            cout<<maxi-c+1<<endl;
        else{
                if(c==b||a==c)
                    cout<<"1"<<endl;
                else
                    cout<<"0"<<endl;

            }




    }



return 0;
}
