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
    vector<int>vec;
    cin>>t;
    for(i=0;i<(4*t)-1;i++){
        cin>>j;
        vec.push_back(j);
    }
    sort(vec.begin(),vec.end());
        for(i=0;i<(4*t)-1;){
            if(vec[i]==vec[i+3])
                i+=4;
            else{
                j=vec[i];
                break;
            }
        }
        cout<<j<<endl;

return 0;
}
