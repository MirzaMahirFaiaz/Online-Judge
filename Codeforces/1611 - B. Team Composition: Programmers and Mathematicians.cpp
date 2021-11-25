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

    ll t,i,j,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
    if(a<b)
        swap(a,b);
        if(b==0){
            cout<<"0"<<endl;
            continue;
        }
    j=a/b;
    if(j>=3){
        cout<<b<<endl;
    }
    else if(j==2){
        j= a+b;
        j= j/4;
        cout<<j<<endl;
    }
    else{
        j= a+b;
        j= j/4;
        cout<<j<<endl;
    }

}

return 0;
}
