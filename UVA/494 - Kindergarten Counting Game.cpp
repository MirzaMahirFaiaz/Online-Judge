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

    ll t,i,j,sz,cnt,f;
    string s;

    while(getline(cin,s)){
            cnt=0;
            f=0;
            sz= s.size();

        for(i=0;i<sz;i++){

                if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
                    f=1;
                else{
                    cnt+=f;
                    f=0;
                }
            }
            cnt+=f;
            cout<<cnt<<endl;
        }

return 0;
}
