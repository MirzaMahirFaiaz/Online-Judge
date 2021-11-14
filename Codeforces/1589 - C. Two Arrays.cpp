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

    ll t,i,j,n,in;
   vector<int>a,b;

    cin>>t;
    while(t--){
            cin>>n;

        for(i=0; i<n; i++){
                cin>>in;
            a.push_back(in);
        }
        for(i=0; i<n; i++){
           cin>>in;
            b.push_back(in);
        }
        ll flag=0;
        sort(a.begin(),a.end());
         sort(b.begin(),b.end());

    for(i=0;i<n;i++){
           if(b[i] - a[i]!=1 && b[i] - a[i]!=0){
                flag=1;
                break;
            }
    }
    if(flag==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    a.clear();
    b.clear();
    }


return 0;
}
