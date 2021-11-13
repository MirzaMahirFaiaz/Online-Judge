#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int t,a,b,c,i;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>a>>b>>c;

        if(a>b&&a<c|| a>c&&a<b){
            printf("Case %d: %d\n",i+1,a);
        }
        else if(b>a&&b<c|| b>c&&b<a)
            printf("Case %d: %d\n",i+1,b);
        else{
            printf("Case %d: %d\n",i+1,c);
        }
    }
    return 0;
}
