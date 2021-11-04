//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
#define MAX	1000001
using namespace std;
int divisors[MAX];
bool sol[MAX];
vector<int>vec;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j,sz;

    for(i = 1; i <MAX;i++)
        for(j =i;j <MAX;j += i)
            divisors[j]++;

    memset(sol,true, sizeof sol);
    for(i = 1; i <MAX;i++)
        for(j = i; j < MAX; j += i)
            if(divisors[j] <= 3 || divisors[j] % divisors[i] != 0)
                sol[j] = false;

    for(i =1;i<MAX;i++)
        if(sol[i])
            vec.push_back(i);

        sz = vec.size();
    for(i=107;i<sz; i+=108)
        cout<<vec[i]<<endl;


    return 0;
}
