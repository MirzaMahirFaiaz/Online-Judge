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

    ll t,i,j,in,n,max1=-99,max2=-999,max1i,max2i;

    vector<ll>vec;
    cin>>n;

    for(i=0;i<n;i++){
        cin>>in;
        vec.push_back(in);
        if(max1<in)
        {
            max2=max1;
            max2i=max1i;
            max1=in;
            max1i=i;
        }
        else if(max2<in){
            max2=in;
            max2i=i;
        }
    }

cout<<max2i+1<<endl;

return 0;
}
