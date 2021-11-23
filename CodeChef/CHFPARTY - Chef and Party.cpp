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

    ll t,i,j,cnt,n,in;
    vector<int>vec;
    cin>>t;
    while(t--){
        cin>>n;
        for(i=0;i<n;i++){
            cin>>in;
            vec.push_back(in);
        }
         sort(vec.begin(),vec.end());
         cnt = 0;
        for(int i=0;i<n;i++)
        {
            if(cnt>=vec[i])
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
        vec.clear();
    }

return 0;
}
