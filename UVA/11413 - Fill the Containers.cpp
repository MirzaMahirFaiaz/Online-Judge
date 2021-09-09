//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;
vector<int>vec;
ll n,m,sum=0;
bool chk(ll mid){

    ll ncu=0,ccs=0,i;
    for (i=0;i<n;i++){
        if (vec[i]>mid)
            return false;
        if (ccs+vec[i]>mid)
            ccs = 0;
        if (ccs==0)
            ncu++;
        if (ncu>m)
            return false;
        ccs +=vec[i];
    }
    //cout<<mid<<" ncu-"<<ncu<<endl;
    return true;
}
void BS (){
    ll high=sum,low=1,ans,mid;
    while(high>=low){
    mid=(high+low)>>1;
    bool res= chk(mid);
    if(res){
        ans=mid;
        high=mid-1;
    }
    else
        low=mid+1;

    }
cout<<ans<<endl;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j;
   while(cin>>n>>m){
    for(i=0;i<n;i++){
        cin>>j;
        vec.push_back(j);
        sum+=j;
    }
    BS();
    vec.clear();
   }
return 0;
}
