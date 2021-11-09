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

    ll t,i,j,ans,n,sz;
    int pre[] = {1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
    char s[1000];

    scanf("%lld",&t);
    getchar();
    for(i=1;i<=t;i++){
            ans=0;
            gets(s);

        for(j = 0;s[j]; j++) {
            if(s[j] == ' ')
                ans++;
            else
                ans += pre[s[j]-'a'];
        }

            printf("Case #%d: %d\n",i,ans);
    }
return 0;
}
