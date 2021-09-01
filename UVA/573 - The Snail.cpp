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
    double fat,ans,h,u,d,f;
   while(1){
    cin>>h>>u>>d>>f;
    ans=0;
    ll day=1;
    if(h==0)
        return 0;

        fat=(f/100)*u;
        while(ans < h && ans >= 0)
		{
			ans += u;
			if(u> 0)
				u -= fat;

			if(ans > h)
				break;
			ans -= d;
			if(ans < 0)
				break;
			++day;
		}
		if(ans < 0)
			cout << "failure on day " << day <<endl;
		else
			cout << "success on day " << day <<endl;
   }
return 0;
}
