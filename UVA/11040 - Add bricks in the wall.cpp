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

    ll t,i,j;
    cin>>t;
    while(t--)
    {
        int g[10][10] = {};
        for(i = 0; i < 9; i += 2)
        {
            for(j = 0; j <= i; j += 2)
                cin>>g[i][j];
        }
        int a, b, c;
        for(i = 8; i > 0; i -= 2)
        {
            for(j = 0; j < i; j += 2)
            {
                a = g[i][j], b = g[i][j+2];
                c = g[i-2][j];
                g[i][j+1] = (c-a-b)/2;
                g[i-1][j] = g[i][j] + g[i][j+1];
                g[i-1][j+1] = g[i][j+1] + g[i][j+2];
            }
        }
        for(i = 0; i < 9; i++)
        {
            for(j = 0; j <= i; j++)
            {
                if(j)
                    putchar(' ');
                cout<<g[i][j];
            }
            puts("");
        }

    }

    return 0;
}
