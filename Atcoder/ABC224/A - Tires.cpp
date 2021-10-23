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
    string str;
    cin>>str;
    j = str.size();
    j--;
    if(str[j-1]=='e' || str[j-2]=='r'){
        cout<<"er"<<endl;
    }
    else
        cout<<"ist"<<endl;

return 0;
}
