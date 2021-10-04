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

    ll t,i,j;
    ll n, cnt, temp, it;
    bool a[35];
    while(1){
        cin>>n;
        if(n==0)
            return 0;
        cnt = 0, temp = n, it = 0;
        while(temp){
            if(temp % 2) {
                    cnt++;
                    a[it++] = 1;
            }
            else
                a[it++] = 0;
            temp /= 2;
        }
        printf("The parity of ");
        for( i=it-1; i>=0; i--)
            printf("%d", a[i]);
        printf(" is %d (mod 2).\n", cnt);
    }

return 0;
}
