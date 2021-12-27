//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

bool chk(int i, string& s){
    if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='c') return 1;
    return 0;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j,n,q;
    cin>>n>>q;
   string s;
   cin>>s;
   unordered_set<ll> u;
   ll cnt=0;
   for(i=0;i<n-2;i++){
       if(chk(i,s)){
           cnt++;i+=2;
       }
   }

   while(q--){
       ll pos;
       char c;
       cin>>pos>>c;
       pos--;
       for(i=max((ll)0,pos-2);i<=min(pos,n-3);i++){
           if(chk(i,s))
                cnt--;
       }
       s[pos]=c;
       for(i=max((ll)0,pos-2);i<=min(pos,n-3);i++){
           if(chk(i,s))
                cnt++;
       }
       cout<<cnt<<endl;
   }


return 0;
}
