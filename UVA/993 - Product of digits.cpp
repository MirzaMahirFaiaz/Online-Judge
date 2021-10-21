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
    vector<int>vec;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if (n == 1){
            cout << 1 << endl;
            continue;
        }

        for (i=9;i>1; i--)
        {
            while (!(n%i))
            {
                vec.push_back (i);
                n /= i;
            }
        }

        if(n > 9)
            cout <<"-1"<< endl;
        else
        {
            sort(vec.begin(),vec.end());
            ll sz = vec.size();

            for (i=0;i<sz;i++)
                cout<<vec[i];
            cout<<endl;
        }
        vec.clear();

    }
    return 0;
}
