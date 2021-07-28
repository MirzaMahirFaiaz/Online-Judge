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

    ll t,i,j,n,no,ne,in;
    cin>>t;
    while(t--){
        cin>>n;
        no=ne=0;
        n=2*n;
        for(i=0;i<n;i++){
                cin>>in;
            if(in&1)
            no++;
        else
            ne++;
        }
        if(no==ne)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }



return 0;
}
