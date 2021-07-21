//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main()
{
        unsigned long long array[10000],i,k,j,t,n;
       cin>>t;
        for(i=0;i<t;i++){

            for(j=0;j<=5;j++){
                cin>>array[j];
            }
            cin>>n;
            for(j=6;j<=n;j++){
                array[j]=(array[j-1]+array[j-2]+array[j-3]+array[j-4]+array[j-5]+array[j-6])%10000007;
            }

            printf("Case %llu: %llu\n",i+1,array[n]%10000007);
        }
        return 0;
        }
