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
     cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n>=1900){
            cout<<"Division 1\n";
        }
        else if(n>=1600){
            cout<<"Division 2\n";
        }
        else if(n>=1400){
           cout<<"Division 3\n";
        }
        else{
            cout<<"Division 4\n";
        }
    }
return 0;
}
