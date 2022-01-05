#include<stdio.h>
#include<bits/stdc++.h>
#include<string.h>
#define ll long long
using namespace std;

int main(){
    ll t,i,j,n;

    string s,r;
    cin>>t;

    while(t--){
        cin>>s;
        r=s;
        reverse(r.begin(),r.end());

        if(r==s){
           cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

   return 0;
}
