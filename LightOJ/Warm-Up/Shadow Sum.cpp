//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;
int a [20002];
int b [20002];

int main(){
    int t, n, x;
    scanf("%d",&t);

    for(int i=1; i<=t; i++){
        scanf("%d",&n);
        for(int j=1; j<=n; j++){
            scanf("%d", &a[j]);
        }
        int sum = 0;
        for(int j=n; j>=1; j--){
            x = a[j];
            if(a[j]<0) x = -x;
            if(b[x]==0) {
                sum = sum + a[j];
                b[x] = 1;
            }
        }

        printf("Case %d: %d\n", i, sum);
        memset(b,0,sizeof(b));
    }

    return 0;
}
