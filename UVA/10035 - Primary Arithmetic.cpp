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

    ll t,i,j,cnt,a,b,carry,sum;

    while(1){
            cnt=0;
            carry=0;
            cin>>a>>b;
    if(!a&&!b)
        return 0;
    while(a!=0||b!=0){
        sum=(a%10)+(b%10)+carry;
        if(sum>9){
            cnt++;
            carry=1;
        }
        else
            carry=0;
        a/=10;
        b/=10;
    }

    if(cnt==0)
        cout<<"No carry operation."<<endl;
    else if(cnt==1)
        cout<<"1 carry operation."<<endl;
    else
        cout<<cnt<<" carry operations."<<endl;

    }

return 0;
}
