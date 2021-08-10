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

    ll t,l,w,h,i=1;
    cin>>t;
    while(t--){
        cin>>l>>w>>h;
        cout<<"Case "<<i<<": ";
        i++;
		if(l<=20 && w<=20 && h<=20)
            cout<<"good"<<endl;
		else
            cout<<"bad"<<endl;
    }

return 0;
}
