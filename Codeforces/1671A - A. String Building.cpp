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
            string a;
        cin >> a;
        ll A = 0, B = 0, i;
        bool no = false;
        ll sz = a.size();
        for(i = 0;i<sz; i++){
            if(a[i] == 'a')
                A++;
            if(a[i] == 'b')
             B++;
            if(a[i] == 'b' && A > 0){
                if(A == 1){
                    no = true;
                    break;
                }
                A = 0;
            }
            if(a[i] == 'a' && B > 0){
                if(B == 1){
                    no = true;
                    break;
                }
                B = 0;
            }
            if(i == a.size()-1){
                if(A == 1 || B == 1){
                    no = true;
                    break;
                }
            }
        }

        if(no)
         cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

    }
return 0;
}
