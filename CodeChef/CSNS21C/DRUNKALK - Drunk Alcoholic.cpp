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
        cin>>j;
        if(j%2==0){
                j/=2;
            cout<<((j*3)-j)<<endl;
        }
        else{
            j--;
              j/=2;
            cout<<((j*3)-j+3)<<endl;

        }
    }

return 0;
}
