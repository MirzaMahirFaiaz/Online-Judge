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

    ll t,i,j,x,y;
    cin>>x>>y;
    int arr[x][y];
    for(int i=0; i<x; i++)
        for(int j=0; j<y; j++)
        {
            cin>>arr[i][j];
        }
    int flag=0;
    for(int i1=0; i1<x; i1++)
    {
        for(int i2=i1; i2<x; i2++)
        {

            for(int j1=0; j1<y; j1++)
            {
                for(int j2=j1; j2<y; j2++)
                {
                    if(arr[i1][j1]+arr[i2][j2]>arr[i2][j1]+arr[i1][j2])
                    {
                        flag=1;
                        break;
                    }

                }
            }
        }

    }
    if(flag==0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    return 0;
}
