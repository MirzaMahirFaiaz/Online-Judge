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

    ll t,i,j=0,a,b;
    cin>>a>>b;
    while(a||b){
            if((a%10)+(b%10)>9){
                j=1;
                break;
            }
            a/=10;
            b/=10;

    }
    if(j==1){
        cout<<"Hard"<<endl;
    }
    else{
        cout<<"Easy"<<endl;
    }

return 0;
}
