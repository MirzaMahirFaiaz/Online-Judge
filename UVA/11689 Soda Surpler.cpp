#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll e,f,c,t,i;
    cin>>t;


    while(t--) {

        cin>>e>>f>>c;
        e += f;
        int ans = 0;
        while(e >= c) {
            ans += e/c;
            e = e%c + e/c;
        }
        cout<<ans<<endl;
    }
    return 0;

}
