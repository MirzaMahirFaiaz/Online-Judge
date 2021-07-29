#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main(){

    ll t,i,n,j;
    string s;

    cin>>t;

    for(i=1;i<=t;i++){
            cin>>s;
           printf("Case %d: ",i);
    if(s[4]=='s')
        cout<<s<<endl;
    else{
        cout<<"https://";
        for(j=8;;j++){
            printf("%c",s[j]);
            if(s[j]=='\0')
                break;
        }
        cout<<endl;
    }


    }
return 0;
}

