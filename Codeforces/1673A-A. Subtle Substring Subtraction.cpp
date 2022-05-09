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
        cin >> s;
        ll x;
        ll l =s.size();
        if(l == 1){
            cout<<"Bob ";
            x = s[0] - 'a' + 1;
            cout<<x;
        }
        else{
            cout<<"Alice ";
            ll sum = 0, i;
            if(l&1){
                if(s[0] >= s[l-1]){
                    for(i = 0; i < l-1; i++){
                        sum = sum + s[i] - 'a' + 1;
                    }
                    sum = sum - s[l-1] + 'a' - 1;
                }
                else{
                    for(i = 1; i < l; i++){
                        sum = sum + s[i] - 'a' + 1;
                    }
                    sum = sum - s[0] + 'a' - 1;
                }
            }
            else{
                for(i = 0; i < l; i++){
                    sum = sum + s[i] - 'a' + 1;
                }

            }
            cout<<sum;
        }
        cout<<endl;
    }

return 0;
}
