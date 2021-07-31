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

    ll i,j,n,x[5],f=1;

    cin>>n;
    x[4]=n%10;
    n/=10;
    x[3]=n%10;
    n/=10;
    x[2]=n%10;
    n/=10;
    x[1]=n;
    if(x[1]==x[2]&&x[2]==x[3]&&x[3]==x[4])
        f=0;
        if(f==1){
    for(i=1;i<4;i++){
        if((x[i]<=8&&x[i+1]==x[i]+1)||(x[i]==9&&x[i+1]==0))
            f=0;
            else{
                f=1;
                break;
            }
    }
        }
    if(f==1)
        cout<<"Strong"<<endl;
     else
        cout<<"Weak"<<endl;

return 0;
}
