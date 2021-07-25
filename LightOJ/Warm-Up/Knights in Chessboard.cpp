//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main(){
    ll t,i,j,n,m,ans;

    cin>>t;
    j=t;

    while(t--){
        cin>>n>>m;
        ans=0;
        if(n<m){
            n=n+m;
            m=n-m;
            n=n-m;
        }
        if((n==1||m==1)||(n==2&&m==2))
        {
         ans= n*m;
        }
        else if(m==2){
                if(n%2==0){
            if(n%4==0){
                ans=n;
            }
            else{
                ans=n+2;
            }
                }
                else{
                    ans=n+1;
                }
        }
        else{
            ans=((n*m)+1)/2;
        }




//        ans=((n*m);
//        //ans= (n*m)-((n-1)*(m-2)+(m-1)*(n-2));
//        ans=n*m;
//        if(ans%2==1)
//            ans++;
//        ans=ans/2;

        cout<<"Case "<<j-t<<": "<<ans<<endl;
    }
    return 0;
}
