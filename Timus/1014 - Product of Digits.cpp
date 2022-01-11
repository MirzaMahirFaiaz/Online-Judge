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

    ll t,i,j,n;
   cin>>n;

    if(n==0)
        cout<<"10"<<endl;
    else if(n==1)
     cout<<"1"<<endl;
    else{
        bool valid = true;
        string ans;

        while(valid && n!=1){
            valid = false;
            for(i = 9;i>1;--i){
                if(n%i==0){
                    valid = true;
                    ans += (char)('0'+i);
                    n /= i;
                    break;
                }
            }
        }
        reverse(ans.begin(),ans.end());
        if(!valid)
            cout<<"-1"<<endl;
        else
         cout<<ans.c_str()<<endl;
    }

return 0;
}
