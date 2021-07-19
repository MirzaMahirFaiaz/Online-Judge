//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main()
{

    ll n,t,i,j,tem,base,col,row,basenumber;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    cin>>t;
    tem=t;

    while(t--)
    {
        cin>>n;
        j=sqrt(n);
        if(j*j==n)
        {
            base=j-1;
            j=j-1;
        }
        else
        {
            j=sqrt(n);
            base=j;
        }

        basenumber= base*base;
        if(base%2==0)
        {
            if(n-basenumber<=j+1)
            {
                row=j+1;
                col=n-basenumber;
            }
            else
            {
                col=j+1;
                row=((j+1)*(j+1))-n+1;
            }
        }
        else
        {
            if(n-basenumber<=j+1)
            {
                col=j+1;
                row=n-basenumber;
            }
            else
            {
                row=j+1;
                col=((j+1)*(j+1))-n+1;
            }

        }
        cout<<"Case "<<tem-t<<": "<<row<<" "<<col<<endl;

    }
    return 0;
}

