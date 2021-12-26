//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

bool isPalindrome(vector<ll>& v){
    ll s=v.size();
    ll i=0,j=s-1;
    while(i<j){
        if(v[i]!=v[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}
bool chk(vector<ll>& a,ll x){
    vector<ll> b;
    for(int i=0;i<a.size();i++){
        if(a[i]!=x) b.push_back(a[i]);
    }
    bool ans=isPalindrome(b);
    return ans;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j;
    cin>>t;
    while(t--){
         ll n;
         cin>>n;
   vector<ll> vec(n);

   for(int i=0;i<n;i++)
        cin>>vec[i];
   if(n==1 || n==2){
       cout<<"YES"<<endl;
       continue;
   }
   if(isPalindrome(vec)){
       cout<<"YES"<<endl;
   continue;
   }

   bool ok=0;
   ll i=0,j=n-1;
   while(i<j){
       if(vec[i]!=vec[j]){
           ok=chk(vec,vec[i]) || chk(vec,vec[j]);
           break;
       }
       i++,j--;
   }
   if(ok)
       cout<<"YES"<<endl;
   else
        cout<<"NO"<<endl;
}

return 0;
}
