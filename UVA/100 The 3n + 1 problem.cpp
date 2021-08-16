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

    ll t,i,j,a,b;

    while((scanf("%d %d",&a,&b))!=EOF){
        int mx = 0;
        int x = (a>b)?a:b;
        int y = (a<b)?a:b;
        for(int i = y; i <= x; i++){
        int n = i,cnt = 1;
            while(n > 1){
                if(n%2)n = 3*n+1;
                else n/=2;
                cnt++;
            }
            if(cnt >= mx)mx = cnt;
        }
        cout << a << " " << b << " " << mx << endl;
    }
return 0;
}
