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

    ll t,i,j,sz;
    string s;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>s;
        sz=s.size();
        if(sz==5)
            cout<<"3"<<endl;
        else
        {
            if((s[0]=='o'&&s[1]=='n')||(s[2]=='e'&&s[1]=='n')||(s[0]=='o'&&s[2]=='e'))
                cout<<"1"<<endl;
            else
                cout<<"2"<<endl;
        }
    }

return 0;
}
