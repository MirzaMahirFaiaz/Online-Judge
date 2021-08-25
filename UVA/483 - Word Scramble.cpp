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

    ll t,i,j,sz,cnt;
    string s;

    while(getline(cin,s)){
        sz= s.size();
        for(i=0;i<sz;i++){
            cnt=0;
            if(s[i]!=' '){
                while(s[i+cnt]!=' ' && i+cnt<sz){
                        cnt++;
                    }
                for(j=(i+cnt)-1;i<=j && j<sz;j--){
                        cout<<s[j];
                    }
                                i+=cnt-1;
            }
            else{
                cout<<s[i];
                }
        }
        cout<<endl;
    }
return 0;
}
