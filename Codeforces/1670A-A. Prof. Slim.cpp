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
         ll n;
        cin >> n ;
        ll i, a[n], negative = 0, positive = 0;
        for(i=0;i<n;i++){
            cin >> a[i];
            if(a[i] < 0){
                a[i]*=-1;
                negative++;
            }
            else positive++;
        }

        bool no = false;
        for(i = n-2; i >= 0; i--){
            if(positive > 1){
                if(a[i] > a[i+1]){
                    no = true;
                    break;
                }
                positive--;
            }
        }

        for(i=1;i<n;i++){
            if(negative > 1){
                if(a[i] > a[i-1]){
                    no = true;
                    break;
                }
                negative--;
            }
        }

        if(no)
            cout<<"NO";
        else
         cout<<"YES";

        cout<<endl;
    }
return 0;
}
