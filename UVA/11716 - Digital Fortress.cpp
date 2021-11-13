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

    ll t,i,j,sz,rt;
    string s;

    cin>>t;
    getline(cin,s);
    //fflush(stdin); -its not work here. we should use getline here
    while(t--){
        getline(cin,s);
        sz= s.size();
        rt= sqrt(sz);

        if(rt*rt!=sz)
                cout<<"INVALID";
        else{
            for(i=0;i<rt;i++){
                for(j=i;j<sz;j=j+rt){
                    cout<<s[j];
                }
            }
        }
        cout<<endl;
    }

return 0;
}
