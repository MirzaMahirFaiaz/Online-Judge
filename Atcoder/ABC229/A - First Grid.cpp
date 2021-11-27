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
    string s1,s2;
    cin>>s1;
    fflush(stdin);
    cin>>s2;
    ll cnt=0;
    for(i=0;i<2;i++){
        if(s1[i]=='#')
            cnt++;
    }
     for(i=0;i<2;i++){
        if(s2[i]=='#')
            cnt++;
    }
    if(cnt==2 && s1[0]=='#' && s2[1]=='#' ){
       cout<<"No"<<endl;
    }
    else if(cnt==2 && s1[1]=='#' && s2[0]=='#'){
        cout<<"No"<<endl;
    }
    else
        cout<<"Yes"<<endl;

return 0;
}
