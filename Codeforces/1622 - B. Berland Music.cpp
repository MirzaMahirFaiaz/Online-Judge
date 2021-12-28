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
    cin>>t;
    while(t--){
        cin>>n;
           vector<pair<int,int>>vec(n);
           for(i=0;i<n;i++){
            cin>>vec[i].first,vec[i].second=i;
                     }
                     string s;
                     cin>>s;
                     sort(vec.begin(),vec.end());
                     ll ans=n;
                     for(i=n-1;i>=0;i--){
                        if(s[vec[i].second]=='1'){
                            vec[i].first = ans;
                            ans--;
                        }
                     }
                     for(i=n-1;i>=0;i--){
                        if(s[vec[i].second]=='0'){
                            vec[i].first = ans;
                            ans--;
                        }
                     }
                     for(i=n-1;i>=0;i--)
                        swap(vec[i].first,vec[i].second);
                     sort(vec.begin(),vec.end());
                     for(i=0;i<n;i++)
                        cout<<vec[i].second<<" ";
                        cout<<endl;

    }

return 0;
}
