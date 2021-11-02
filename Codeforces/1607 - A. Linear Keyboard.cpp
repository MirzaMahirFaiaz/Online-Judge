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

    ll t,i,j;
    string s;
    ll arr[27];
    cin>>t;
    while(t--){
        cin>>s;
        for(i=0;i<26;i++){
            arr[s[i]-'a']=i;
        }
        cin>>s;
        ll cnt=0;
        for(i=1;s[i];i++){
            cnt= cnt+ abs(arr[s[i]-'a']-arr[s[i-1]-'a']);
        }
        cout<<cnt<<endl;
    }

return 0;
}
