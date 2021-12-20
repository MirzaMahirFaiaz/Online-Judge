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
        cin>>s;
        bool flag = true;
        ll sz = s.size();
        if(sz%2==0){
                for(i=0,j=sz/2;j<sz;j++,i++){
                        if(s[i]!=s[j]){
                            flag= false;
                            break;
                        }
                }
                if(flag)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;

        }
        else
            cout<<"NO"<<endl;
    }

return 0;
}
