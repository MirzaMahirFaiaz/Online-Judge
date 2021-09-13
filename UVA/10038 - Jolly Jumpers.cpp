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

    ll t,i,j,n;

    int ar[3001];
	while(scanf("%lld", &n) != EOF) {
		for(i = 0; i < n; i++)
			cin>>ar[i];
		int mark[3001] = {0}, flag = 0;
		for(i = 1; i < n; i++) {
			if(abs(ar[i] - ar[i-1]) < n)
				mark[abs(ar[i] - ar[i-1])]=1;
		}
		for(i = 1; i < n; i++){
			if(mark[i] == 0)
				flag = 1;
		}
		if(flag==1)
			cout<<"Not jolly"<<endl;
		else
			cout<<"Jolly"<<endl;
	}



return 0;
}
