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
    char ch[4],c1,c2;
    cin>>t;
    while(t--){
            cin >>ch[0]>>ch[1]>>ch[2];

        cin>>c1>>c2;

        for(i=0;i<3;i++)
        {
            if(ch[i]==c1){
                cout<<c1<< endl;
                break ;
            }
            else if(ch[i]==c2)
            {
                cout<<c2<<endl;
                break ;
            }
        }
    }

return 0;
}
