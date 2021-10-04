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

    ll t,i,j,sz;
    char s[51];
    int pre[] = {2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};

    while(scanf("%s",&s)==1){

        for(i = 0; s[i]; i++) {
			if(s[i] >= 'A' && s[i] <= 'Z')
				printf("%d", pre[s[i]-'A']);
			else
				printf("%c", s[i]);
		}
        cout<<endl;
    }
return 0;
}
