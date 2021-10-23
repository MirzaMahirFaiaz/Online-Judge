//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main()
{

   // ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    ll t,i,j,n,m;

    char a[1000],b[1000];

    while(cin>>n>>m){
        multimap<string, string> mp;
        while(n--) {
            scanf("%s %s", a, b);
            mp.insert(make_pair(a,b));
        }
        while(m--) {
            scanf("%s", a);
            if(mp.find(a) != mp.end()) {
                    auto it=mp.find(a);
                cout<< it->second <<endl;
                continue;
            }
            ll len = strlen(a);
            if(a[len-1] == 'y' && a[len-2] != 'a' && a[len-2] != 'e'
               && a[len-2] != 'i'&& a[len-2] != 'o'&& a[len-2] != 'u') {
                a[len-1] = 'i', a[len] = 'e', a[len+1] = 's';
                a[len+2] = '\0';
            } else if(a[len-1] == 'o' || a[len-1] == 's' || a[len-1] == 'x') {
                a[len] = 'e';
                a[len+1] = 's';
                a[len+2] = '\0';
            } else if(len >= 2 && ((a[len-2] == 'c' && a[len-1] == 'h') ||(a[len-2] == 's' && a[len-1] == 'h'))) {
                a[len] = 'e';
                a[len+1] = 's';
                a[len+2] = '\0';
            } else
                a[len] = 's', a[len+1] = '\0';
            cout<<a<<endl;
        }
    }



return 0;
}
