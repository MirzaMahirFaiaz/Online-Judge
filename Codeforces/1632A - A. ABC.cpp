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
    char ar;
    cin>>t;
    getchar();
    while(t--){
            string s;
            cin>>i;
            getchar();
            cin>>s;
    if(i==1 ||(i==2 && (s=="10"||s=="01")))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }

return 0;
}
