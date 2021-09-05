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

    ll t,i,j,n;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>s;
        for(i=0;i<n;i++){
            if(s[i]=='U')
                cout<<"D";
            else if(s[i]=='D')
                cout<<"U";
            else
                cout<<s[i];
        }
        cout<<endl;
    }
return 0;
}
