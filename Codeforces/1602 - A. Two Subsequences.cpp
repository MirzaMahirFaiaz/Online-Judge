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
    string str;
    cin>>t;
    fflush(stdin);
    while(t--){
        cin>>str;
        ll mini,sz;
        char min='z';
        sz = str.size();

        for(i=0;i<sz;i++){
            if(min>str[i]){
                min=str[i];
                mini=i;
               // cout<<"runinng"<<endl;
            }

        }
        cout<<str[mini]<<" ";
         for(i=0;i<sz;i++){
            if(mini!= i){
                cout<<str[i];
            }
        }
        cout<<endl;
    }

return 0;
}
