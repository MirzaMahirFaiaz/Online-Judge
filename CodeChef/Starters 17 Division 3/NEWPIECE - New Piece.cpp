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

    ll t,i,j,x1,x2,y1,y2;
    cin>>t;

    while(t--){
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2 && y1== y2)
        cout<<"0"<<endl;
    else if((x1+y1)%2==0 ){
        if( (x2+y2)%2==0 )
             cout<<"2"<<endl;
        else
            cout<<"1"<<endl;
    }
    else{
          if( (x2+y2)%2==1 )
             cout<<"2"<<endl;
        else
            cout<<"1"<<endl;
    }
    }

return 0;
}
