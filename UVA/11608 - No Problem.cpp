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

    ll t,i,j,n;
    t=1;
    while(cin>>n){
            if(n<0)
            break;
    cout<<"Case "<<t++<<":"<<endl;
		int sum=n,i;
		int m[12];
		int need[12];
		for(i=0;i<12;i++)
			cin>>m[i];
		for(i=0;i<12;i++)
			cin>>need[i];
		for(i=0;i<12;i++){
			if(sum>=need[i]){
				cout<<"No problem! :D"<<endl;
				sum-=need[i];
			}
			else
				cout<<"No problem. :("<<endl;
			sum+=m[i];
		}

  }

return 0;
}
