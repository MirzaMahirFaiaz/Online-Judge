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

    ll t,i,j,n;

    while (1){
            cin>>n;
    if(n==0)
        break;

        int works = 0, x, y;

        for (x = 1; x*x <= n;){
            if (x*x*x > n){
                for (y = 1; y < x;){
                    if (x*x*x - y*y*y == n){
                        works = 1;
                        break;
                    }
                    y++;
                }
            }
            if (works)
                break;
            x++;
        }

        if (works)
            cout<<x<<" "<<y<<endl;
        else
            cout<<"No solution"<<endl;

    }

return 0;
}
