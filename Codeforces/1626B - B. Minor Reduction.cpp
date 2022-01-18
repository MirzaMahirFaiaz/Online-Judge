//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

void solve(){

       string s;
    cin>>s;
    ll n=s.length();
    string s1="";
    for(int i=n-1;i>0;i--)
    {
        int a=s[i]-'0';
        int b=s[i-1]-'0';
        if(a+b>9)
        {
            for(int j=0;j<i-1;j++)cout<<s[j];
            cout<<a+b;
            for(int j=s1.length()-1;j>=0;j--)cout<<s1[j];
            cout<<endl;
            return;
        }
        else s1+=s[i];
    }
    if(n==2)
    {
        int a=s[0]-'0';
        int b=s[1]-'0';
        cout<<a+b<<endl;
    }
    else{
        int a=s[0]-'0';
        int b=s[1]-'0';
        cout<<a+b<<s.substr(2)<<endl;
    }

}

int main()
{

    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    ll t,i,j;
    cin>>t;
    while(t--){
        solve();

    }
return 0;
}
