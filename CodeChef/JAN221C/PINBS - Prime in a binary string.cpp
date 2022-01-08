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
    cin>>t;
    while(t--){
        string s;
        bool f = false;
        cin>>s;
        j = s.size();
        for(i=0;i<j;i++){
            if(s[i]=='1' && (s[i+1]=='1' || s[i+1]=='0')){
                f= true;
                cout<<"YES"<<endl;
                break;
            }
        }
        if(f==false)
            cout<<"NO"<<endl;

    }

return 0;
}
