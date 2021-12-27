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

    ll t,i,j,l,r;
    string s;
    cin>>l>>r;
    fflush(stdin);
    cin>>s;
    ll sz = s.size();
    for(i=0;i<l-1;i++){
        cout<<s[i];
    }
    for(i=r-1;i>=l-1;i--)
        cout<<s[i];
    for(i=r;i<sz;i++)
        cout<<s[i];
    cout<<endl;

return 0;
}
