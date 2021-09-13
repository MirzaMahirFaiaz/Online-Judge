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

    ll t,i,j,sz,sum,p;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
       sum= p=0;
        sz= s.size();
        for(i=0;i<sz;i++){
            if(s[i]=='O')
            {
                p++;
                sum+=p;
            }
            else{
                p=0;
            }
        }
        cout<<sum<<endl;
    }

return 0;
}
