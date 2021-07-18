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

    string vecs[101];
    string s;
    ll n,i,j,t,cn,f;

    cin>>t;
    for(i=1; i<=t; i++)
    {
        vecs[0]="http://www.lightoj.com/";
        cn=f=0;
        vecs[1]="0";
        cout<<"Case "<<i<<":"<<endl;
        while(f==0)
        {
            cin>>s;


            if(s== "VISIT")
            {
                cin>>s;
                vecs[++cn]=s;
                cout<<vecs[cn]<<endl;
                vecs[cn+1]="0";
            }

            else if(s=="BACK")
            {

                if(cn-1<0)
                    cout<<"Ignored"<<endl;
                else
                    cout<<vecs[--cn]<<endl;
            }

            else if(s=="FORWARD")
            {

                if(vecs[cn+1]=="0")
                    cout<<"Ignored"<<endl;
                else
                    cout<<vecs[++cn]<<endl;
            }
            else if(s=="QUIT")
            {
                f=1;
            }

        }
    }
return 0;
}




