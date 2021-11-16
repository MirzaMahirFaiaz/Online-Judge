//Incomplete
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

    ll t,i,j,c1,c2,h,w,l;
    while(1){
        cin>>l>>w>>c1>>c2;
        if(l==0 && w==0 && c1==0 &&c2==0)
            return 0;
        if(l<w)
        {
            l=l+w;
            w=l-w;
            l=l-w;
        }
        if(c1<c2){
            c1=c1+c2;
            c2=c1-c2;
            c1=c1-c2;
        }
        cout<<l<<" "<<(c1+c1)+(c2+c2)<<endl;
        if(l<=((c1+c1)+(c2+c2)) && w<=c1+c1)
            cout<<"S"<<endl;
        else
            cout<<"N"<<endl;
    }
return 0;
}
