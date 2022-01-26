//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main()
{

   // ios_base::sync_with_stdio(false);
   // cin.tie(NULL);

    ll t,i,j;
    cin>>t;
    while(t--){
        int x, y, z; cin >> x >> y >> z;
		cout << (x*z)-(x*y) <<endl;
    }

return 0;
}
