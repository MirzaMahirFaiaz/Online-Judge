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

    ll t,i,j,n,cont[3];
    string s;

    cont[0] = cont[1] = cont[2] = 0;

    cin>>n;
    for(i = 0;i<n;++i){
        cin>>s;

        if(s[0] == 'E')
            ++cont[0];
        if(s[0] == 'L')
         ++cont[1];
        if(s[0] == 'M')
         ++cont[2];

       cin>>s;
    }

    ll b = max(cont[0],max(cont[1],cont[2]));

    if(cont[0] == b)
        cout<<"Emperor Penguin"<<endl;
    if(cont[1] == b)
        cout<<"Little Penguin"<<endl;
    if(cont[2] == b)
        cout<<"Macaroni Penguin"<<endl;

return 0;
}
