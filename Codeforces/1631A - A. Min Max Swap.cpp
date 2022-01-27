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

    ll t,i,in,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>vec1,vec2;
        for(i=0;i<n;i++){
            cin>>in;
            vec1.push_back(in);
        }
         for(i=0;i<n;i++){
            cin>>in;
            vec2.push_back(in);
        }


        for(i=0;i<n;i++){
            if(vec1[i]>vec2[i])
            {

                in=vec1[i];
                vec1[i]=vec2[i];
                vec2[i]=in;
            }
        }
        int j=-9;
        for(i=0;i<n;i++){
           j= max(j,vec1[i]);
        }
        int l=-9;
        for(i=0;i<n;i++){
           l= max(l,vec2[i]);
        }

        cout<<l*j<<endl;

    }

return 0;
}
