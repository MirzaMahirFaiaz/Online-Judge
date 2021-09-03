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
            int f=0;
        cin>>n;
        int ar[130];
        for(i=0;i<130;i++)
            ar[i]=0;
            for(i=0;i<n;i++){
            cin>>s;
            for(j=0;s[j];j++){
                ar[s[j]]++;
            }
        }
        for(i=0;i<130;i++){
            if(ar[i]%n!=0)
            {
                f=1;
    break;
            }
        }
            if(f==0)
            cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;

    }



return 0;
}
