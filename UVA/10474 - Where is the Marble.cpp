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

    ll t=0,i,j,n,q,in;
    vector<int>vec;

    while(1){
            cin>>n>>q;
            if(n==0&&q==0)
                return 0;
    for(i=0;i<n;i++){
        cin>>in;
        vec.push_back(in);
    }
    sort(vec.begin(),vec.end());
    cout<<"CASE# "<<++t<<":"<<endl;
    while(q--){

            cin >> in;

            auto iter = lower_bound(vec.begin(), vec.end(),in);
//            for(auto it=vec.begin();it!=vec.end();it++){
//                if(*it==in){
//
//                }
//            }
            if (iter == vec.end() || *iter != in)
                cout << in << " not found\n";
            else
                cout << in <<" found at "<< (iter - vec.begin()) + 1 <<endl;

    }
vec.clear();
    }

return 0;
}
