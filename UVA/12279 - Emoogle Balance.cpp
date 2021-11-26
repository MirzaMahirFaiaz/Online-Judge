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

    ll t=0,i,j,cnt,n,in;
    while(1){
        cin>>n;
        if(n==0)
            return 0;
        cnt=0;

        for(i=0;i<n;i++){
            cin>>in;
            if(in==0)
                cnt++;

        }
        n-=cnt;
        n-=cnt;
        cout<<"Case "<<++t<<": "<<n<<endl;
    }
return 0;
}
