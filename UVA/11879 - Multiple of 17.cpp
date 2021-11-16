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

    ll tmp,i,j;
    string s;
    while(getline(cin,s)) {
        if(s[0] == '0' && s[1] == '\0')
            break;
         tmp = 0;
        for(i = 0; s[i]; i++) {
            tmp = tmp*10 + s[i]-'0';
            tmp %= 17;
        }
        if(tmp==0)
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }
return 0;
}
