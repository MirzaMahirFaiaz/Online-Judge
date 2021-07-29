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

    ll t,i,j,n,in,max;
    vector <ll> vec;
    cin>>t;
    while(t--){
        cin>>n;
        max=-9999;
        for(i=0;i<n;i++){
                cin>>in;
            vec.push_back(in);

        }
        for(i=0;i<n-1;i++){

            if(vec[i]*vec[i+1]>max){
            max=vec[i]*vec[i+1];
            }
        }

        cout<<max<<endl;
        vec.clear();
    }
return 0;
}
