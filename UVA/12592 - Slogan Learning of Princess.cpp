//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main()
{

   // ios_base::sync_with_stdio(false);
   // cin.tie(NULL);

    ll t,i,j;
    cin>>t;
    getchar();
    map<string,string>mp;
    while(t--){
            string s,s1;
            getline(cin,s);
            getline(cin,s1);
            mp[s]=s1;
    }
    cin>>t;
    getchar();
    while(t--){
        string s;
        getline(cin,s);
        cout<<mp[s]<<endl;
    }

return 0;
}
