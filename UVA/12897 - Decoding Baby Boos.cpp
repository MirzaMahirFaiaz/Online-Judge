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

    ll t,i,j,r,sz;
    string s;
    char a,b;
    cin>>t;
    while(t--){
        cin>>s;
        cin>>r;
        char R[128], s1, s2;
		for (i = 0; i < 128; i++)
			R[i] = i;
		for (i = 0; i < r; i++) {
			cin>>s1>>s2;
			for ( j = 'A'; j <= 'Z'; j++)
				if (R[j] == s2)
					R[j] = s1;
		}

		for (i = 0; s[i]; i++)
			cout<<R[s[i]];
		cout<<endl;
    }

return 0;
}
