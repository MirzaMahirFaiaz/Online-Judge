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

    ll t,i,j,flag;
    string a,b;
    cin>>t;
    getchar();
    while(t--){
        getline(cin , a);
        getline(cin , b);
        if(a.size()!=b.size()){
            cout<<"No"<<endl;
        }
        else{
            for(i=0;i<a.size();i++)
                    if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o'|| a[i]=='u')a[i]='m';
             for(i=0;i<b.size();i++)
                    if(b[i]=='a' || b[i]=='e' || b[i]=='i' || b[i]=='o'|| b[i]=='u')b[i]='m';
             flag=0;
             for(i=0;i<a.size();i++)
                if(a[i]!=b[i]){
                        flag=1;
                break;
                }
            if(flag)
                cout<<"No"<<endl;
            else
                 cout<<"Yes"<<endl;
        }

    }
return 0;
}
