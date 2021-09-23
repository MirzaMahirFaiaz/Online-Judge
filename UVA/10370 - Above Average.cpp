//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main()
{

  //  ios_base::sync_with_stdio(false);
   // cin.tie(NULL);

    ll t,i,j,n,in,av,total;
    cin>>t;
    while(t--){
            total=0;
            vector<int>vec;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>in;
            total+=in;
    vec.push_back(in);
        }
    av=total/n;
        sort(vec.begin(),vec.end());

        ll ans = 0;
		for (int i = 0; i < n; i++) {
			if (vec[i] > av)
				ans++;
		}
        printf("%.3lf%%\n", (double) ans/(double)n * 100.0);

    }


return 0;
}
