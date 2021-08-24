#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
ll n,i,j,k,sum;

cout<<"PERFECTION OUTPUT"<<endl;
while(1){
    cin>>n;
    if(n==0){
            cout<<"END OF OUTPUT"<<endl;
        break;
    }
    sum=0;
    for(i=1;i<n;i++){
            if(n%i==0){
                sum+=i;
            }

    }
    printf("%5d  ", n);
    if(sum==n){
        cout<<"PERFECT"<<endl;
    }
    else if(sum>n){
        cout<<"ABUNDANT"<<endl;
    }
    else
        cout<<"DEFICIENT"<<endl;
}


return 0;
}
