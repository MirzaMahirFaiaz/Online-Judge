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

    ll t,j;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        char min = str[0];
        ll index = 0;
        ll sz = str.size();
        for(int i = 0;i<sz; i++)
        {
            if(str[i]<min)
            {
                min = str[i];
                index = i;
            }
        }
        string new_b;
        if(index == str.size() - 1)
            new_b = str.substr(0, index);
        else
            new_b = str.substr(0, index)+str.substr(index+1);

        cout<<min<<" "<< new_b<<endl;

    }

    return 0;
}
