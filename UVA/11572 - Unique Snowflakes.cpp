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
    int see,n;
    cin>>t;
    while(t--){
        ll bags;
        int length = 0,agpack = 0;
		int maxP = 0;

		map<int, int> snowflakes;

		cin >> bags;

		for(i=1;i<=bags;i++)
		{
			cin >> n;
			see = snowflakes[n];

			if(see)
			{
				agpack = max(agpack, see);
				length = i - agpack -1 ;
			}

			++length;
			snowflakes[n] = i;
			maxP = max(maxP, length);
		}

		cout <<maxP<<endl;
    }

return 0;
}
