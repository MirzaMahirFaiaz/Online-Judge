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

    ll t,i,j,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        ll cnt=0;
        if(((n+1)/2)>=k){
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    if(j%2==0 && i==j && cnt<k){
                        cout<<"R";
                        cnt++;
                    }
                    else
                        cout<<".";
                }
                cout<<endl;
            }
        }
        else{
            cout<<"-1"<<endl;
        }
    }



return 0;
}
