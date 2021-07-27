#include<stdio.h>
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

    ll t,i=1;
    string str,rev;
    cin >> t;

    while(i<=t)
    {
        cin >>str;

        rev = str;
        reverse(rev.begin(),rev.end());
        if(str==rev)
        {
            cout << "Case "<<i<<": Yes"<<endl;
        }
        else
            cout << "Case "<<i<<": No"<<endl;
        i++;
    }
    return 0;
}

