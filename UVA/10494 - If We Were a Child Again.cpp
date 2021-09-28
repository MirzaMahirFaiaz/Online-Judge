//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main()
{

  //  ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    ll t,i,j,n;
    char ch;
    char s[100001];

   while (scanf("%s %c %lld",s,&ch,&n) != EOF){

          ll len=(ll)strlen(s), rem;
	for(i = rem = 0;i < len;i ++)
	{
		rem = rem*10 + s[i] - '0';
		s[i] = rem/n+'0';
		rem%=n;
	}
	if(ch == '/')
	{
		for(i = 0;i < len&&s[i] == '0';i ++);
		if(i >= len)
			printf("0\n");
		else
	 		puts(s+i);
	}
	else
		printf("%lld\n", rem);
    }
    return 0;
}
