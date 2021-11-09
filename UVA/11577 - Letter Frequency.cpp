//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main()
{

    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    ll t,i,max;
    char s[1000];
    cin>>t;
    getchar();
    while(t--){
           gets(s);
            ll cnt[26] = {};
        for(i = 0; s[i]; i++) {
            if(s[i] >= 'a' && s[i] <= 'z')
                cnt[s[i]-'a']++;
            if(s[i] >= 'A' && s[i] <= 'Z')
                cnt[s[i]-'A']++;
        }
         max = 0;
        for(i = 0; i < 26; i++){
            if(max<cnt[i])
                max=cnt[i];
        }
        for(i = 0; i < 26; i++)
            if(cnt[i] == max)
                printf("%c", i+'a');
        puts("");

    }
return 0;
}
