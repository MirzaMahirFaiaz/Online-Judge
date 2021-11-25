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

    ll t,i,j,n;
    cin>>t;
    while(t--){
            cin>>n;
    if(n%2==0){
        cout<<"0"<<endl;
        continue;
    }
    else{
    i=n;
    bool flag = false;
    while(i>9){
        if(i%2==0){
                flag=true;
        }

            i/=10;

    }
    if(i%2==0 )
    cout<<"1"<<endl;
    else if(flag == true )
        cout<<"2"<<endl;
    else
        cout<<"-1"<<endl;

    }

    }
return 0;
}
