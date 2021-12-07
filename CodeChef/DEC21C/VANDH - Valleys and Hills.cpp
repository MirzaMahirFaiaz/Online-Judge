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

    ll t,i,j,n,m;

    cin>>t;
    while(t--){
            cin>>n>>m;
            string s;
    if(n>m){
            n= n-m;
    while(m!=0){
        s+="01";
        m--;
    }
    while(n!=0){
        s+="010";
        n--;
    }

    }
    else if(n<m){
          m= m-n;
    while(n!=0){
        s+="10";
        n--;
    }
    while(m!=0){
        s+="101";
        m--;
    }
    }
    else{

        while(m+1!=0){
            s+="01";
            m--;
        }
    }
    cout<<s.size()<<endl;
    cout<<s<<endl;
}
return 0;
}
