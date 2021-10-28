//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
#define MAX	200
using namespace std;

int Prime[100], Pt;
void sieve()
{
    Pt = 0;
    int i, j, isPrime[100] = {0};
    Prime[Pt++] = 2;
    for(i = 3; i < 100; i += 2)
    {
        if(isPrime[i] == 0)
        {
            Prime[Pt++] = i;
            for(j = 3; i*j < 100; j += 2)
                isPrime[i*j] = 1;
        }
    }
}

int main()
{
    sieve();
    int n, i, j, tmp;;
    while(scanf("%d", &n) == 1 && n)
    {
        int table[100] = {0};

        for(i = 2; i <= n; i++)
        {
            tmp = i;
            for(j = 0; j < Pt && tmp != 1; j++)
                while(tmp%Prime[j] == 0){
                    tmp /= Prime[j];
                     table[j]++;
                }
        }
        printf("%3d! =", n);

        int length = Pt, count = 0;

        while(table[length] == 0)
                length--;
        for(i = 0; i <= length; i++)
        {
            count++;
            if(count > 15){
            	count -= 15;
            	 printf("\n      ");
            }
            printf("%3d", table[i]);
        }
        cout<<endl;
    }
    return 0;
}
