//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main()
{

   // ios_base::sync_with_stdio(false);
   // cin.tie(NULL);

    ll t,i,j,ind;
    cin>>t;
    string s,s1,str;
    getchar();
    while(t--)
    {
        vector<int>first;
        vector<string>second;
        vector< pair<int, string> >result;

        getchar();
        getline(cin,s);
        stringstream ss(s);

        while(ss>>ind)
            first.push_back(ind);

        getline(cin,str);
        stringstream sst(str);

        while(sst>>s1)
            second.push_back(s1);

        int sztot = min(first.size(), second.size());
        for(i=0; i<sztot; i++)
        {
            result.push_back(make_pair(first[i],second[i]));
        }
        sort(result.begin(), result.end());

        for(i=0; i<sztot; i++)
            cout<<result[i].second<<endl;

        if(t)
            cout<<endl;
    }

    return 0;
}
