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
    while(t--)
    {
        ll dsa1,dsa2,dm1,dm2,toc1,toc2;
        cin>>dsa1>>toc1>>dm1;
        cin>>dsa2>>toc2>>dm2;

        if((dsa1+toc1+dm1)==(dsa2+toc2+dm2))

        {
            if(dsa1>dsa2)
            {
                cout<<"DRAGON"<<endl;
            }
            else if(dsa2>dsa1)
            {
                cout<<"SLOTH"<<endl;
            }
            else
            {
                if(toc1>toc2)
                {
                    cout<<"DRAGON"<<endl;
                }
                else if(toc2>toc1)
                {
                    cout<<"SLOTH"<<endl;
                }
                else
                {
                    if(dm1>dm2)
                    {
                        cout<<"DRAGON"<<endl;
                    }
                    else if(dm2>dm1)
                    {
                        cout<<"SLOTH"<<endl;
                    }
                    else
                    {
                        cout<<"TIE"<<endl;
                    }

                }

            }

        }
        else{
            if((dsa1+toc1+dm1)>(dsa2+toc2+dm2))
                cout<<"DRAGON"<<endl;
                else
            cout<<"SLOTH"<<endl;
        }

    }

    return 0;
}
