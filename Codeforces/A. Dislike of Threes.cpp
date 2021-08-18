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
    int arr[1002];
    j=1;
    for(i=1;j<1002;i++){
        if(i%3!=0&&i%10!=3){
            arr[j]=i;
            j++;
        }
    }
    cin>>t;
    while(t--){
        cin>>n;
        cout<<arr[n]<<endl;
    }
return 0;
}
