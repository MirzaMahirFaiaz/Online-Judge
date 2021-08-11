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

    ll t,i,j,m,w,a,b,ans;
    string ar[]={"JAN", "FEB","MAR","APR", "MAY", "JUN", "JUL", "AUG","SEP", "OCT", "NOV","DEC"};
    int arr[]={31, 28, 31, 30, 31, 30, 31, 31, 30,31, 30, 31};
    string s1,s2;
    string ar1[]={"SUN","MON", "TUE", "WED", "THU", "FRI", "SAT"};
    int arr1[]={1,2,3,4,5,6,7};
    cin>>t;
    while(t--){
          cin>>s1>>s2;
		a = find(ar1, ar1+7, s2) -ar1;
		b = find(ar, ar+12, s1) -ar;
		 ans = 0;
		for (int i = 0; i < arr[b]; i++) {
			if ((a + i)%7 == 5 || (a + i)%7 == 6)
				ans++;
		}
		cout<<ans<<endl;
    }
return 0;
}
