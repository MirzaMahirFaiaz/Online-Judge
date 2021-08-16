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
    ll t,i,j,f=0;
    char s[1000];

    while(gets(s)){
        int len = strlen(s);

		for ( i = 0; i < len; i++) {
			if (s[i] == '"') {
				if (f%2==0)
					printf("``");
				else
					printf("''");

				f++;
			} else
				printf("%c", s[i]);
		}
		cout<<endl;
    }
return 0;
}
