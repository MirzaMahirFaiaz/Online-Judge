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

    ll t,i,j,in;
    vector<int>vec;
    for(i=0;i<26;i++){
        cin>>in;
        vec.push_back(in);
    }
    for(i=0;i<26;i++){
        printf("%c",(int)(96+vec[i]));
    }
    cout<<endl;

return 0;
}
