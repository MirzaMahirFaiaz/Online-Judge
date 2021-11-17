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

    ll t,i,j,n,p,q,gc,cnt,in;
    //vector<int>vec;
    ll vec[30];
    cin>>t;
    for(i=1;i<=t;i++){
            gc=0;
    cnt=0;
        cin>>n>>p>>q;
        for(j=0;j<n;j++){
                cin>>vec[j];
        }

        for(j=0;j<n;j++){
            if(gc+vec[j]<=q&&cnt+1<=p){

                gc+=vec[j];
                cnt++;
            //cout<<gc<<" "<<cnt<<endl;
            }
            else
                break;
        }
      cout<<"Case "<<i<<": "<<cnt<<endl;
    }

return 0;
}
