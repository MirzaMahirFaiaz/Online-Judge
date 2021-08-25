//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main()
{

    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    ll t,i,j;
    string s;

    while(cin>>s){
            for(i=0;i<s.size();i++){
                printf("%c",(char)s[i]-7);
            }
            cout<<endl;
    }
return 0;
}
