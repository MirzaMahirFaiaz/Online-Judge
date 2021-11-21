//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main()
{

    //ios_base::sync_with_stdio(false);
   // cin.tie(NULL);

    ll t,i,j,f;
    string hudai;

    cin>>t;
  getline(cin,hudai);

    while(t--){
            string s,w;

        getline(cin,s);
        istringstream str(s);
        f=0;
        while(str>>w){
              //  cout<<w<<endl;
            if(w=="not"){
                cout<<"Real Fancy"<<endl;
                f=1;
                break;
            }
        }
        if(f==0)
            cout<<"regularly fancy"<<endl;
    }
return 0;
}
