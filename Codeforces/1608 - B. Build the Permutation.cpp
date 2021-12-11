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

    ll t,i,j,n,a,b;
    cin>>t;

    while(t--){
        cin>>n>>a>>b;
        ll lf =1;
        ll rg = n;
        vector<int>ans;
        if((abs(a-b)<=1) && (a+b+2<=n)){
                if(a==b){
           ll h=0,v=0;
           ans.push_back(lf);
           lf++;
           while(h<a){
            ans.push_back(rg);
            rg--;
            ans.push_back(lf);
            lf++;
            h++;
           }
           for(i=lf;i<=rg;i++){
            ans.push_back(i);
           }
                }
                else if( a>b){
                        ll h=0;
                ans.push_back(lf);
                lf++;
                while(h<a-1){
                    ans.push_back(rg);
                    rg--;
                    ans.push_back(lf);
                    lf++;
                    h++;

                }
                for(i=rg;i>=lf;i--){
                    ans.push_back(i);
                }

                }
                else{
                    ans.push_back(rg);
                    rg--;
                    ll v=0;

                    while(v<b-1){
                        ans.push_back(lf);
                        lf++;
                        ans.push_back(rg);
                        rg--;
                        v++;
                    }
                    for(i=lf;i<=rg;i++){
            ans.push_back(i);
           }
                }
                ll sz=ans.size();
                for(i=0;i<sz-1;i++){
                    cout<<ans[i]<<" ";
                }
                cout<<ans.back()<<endl;
           }
           else{
            cout<<"-1"<<endl;
           }
    }

return 0;
}
