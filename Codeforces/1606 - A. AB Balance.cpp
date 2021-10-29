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
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll ab=0, ba=0;
        for(i=0; i<s.size(); i++)
        {
            string y="";
            y+=s[i];
            y+=s[i+1];
            if(y=="ab")
                ab++;
            else if(y=="ba")
                ba++;
        }
        char ch1='a', ch2='b';
        if(ab>ba)
        {
            for(i=0; i<s.size(); i++)
            {
                if(s[i]=='a')
                    s[i]=ch2;
                ab--;
                if(ab==ba)
                    break;
            }
            cout<<s<<endl;
        }
        else if(ab<ba)
        {
            for(i=0; i<s.size(); i++)
            {
                if(s[i]=='b')
                    s[i]=ch1;
                ba--;
                if(ab==ba)
                    break;
            }
            cout<<s<<endl;
        }
        else if(ab==ba)
            cout<<s<<endl;
    }

return 0;
}
