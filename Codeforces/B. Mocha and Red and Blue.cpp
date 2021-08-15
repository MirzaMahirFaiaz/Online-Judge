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

    ll t,i,n,j;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>s;
        for(i=0;i<n;i++){
            if(s[i]=='B'||s[i]=='R')
                break;
        }
        for(j=i;j<n-1;j++){
            if(s[j+1]=='B'||s[j+1]=='R')
                continue;
            else{
                if(s[j]=='B')
                    s[j+1]='R';
                else
                    s[j+1]='B';
            }
        }
        for(j=i;j>0;j--){
            if(s[j]=='B')
                    s[j-1]='R';
                else
                    s[j-1]='B';
        }
        cout<<s<<endl;
    }
return 0;
}
