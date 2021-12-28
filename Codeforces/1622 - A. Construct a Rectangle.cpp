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

    ll t,i,j,in;
    vector<ll>vec;
    cin>>t;
    while(t--){
        for(i=0;i<3;i++){
            cin>>in;
            vec.push_back(in);

        }
        sort(vec.begin(),vec.end());
        if(vec[0]==vec[1] || vec[1]==vec[2]){
            if(vec[0]==vec[1] && vec[2]%2==0)
                cout<<"YES"<<endl;
            else if(vec[1]==vec[2] && vec[0]%2==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else{
                if(vec[0]+vec[1]==vec[2])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

        }

        vec.clear();
    }

return 0;
}
