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
    vector<string> bigrams(n-2);
    for (auto &b : bigrams)
        cin >> b;
    string str = bigrams[0];
    bool flag = false;

    for(i=1;i<n-2;i++)
        if(str.back() != bigrams[i].front()){
            flag=true;
            str+=bigrams[i];
        }
        else{
            str+=bigrams[i].back();
        }

    if (!flag)
        str+='a';

    cout<<str<<endl;

}

return 0;
}
