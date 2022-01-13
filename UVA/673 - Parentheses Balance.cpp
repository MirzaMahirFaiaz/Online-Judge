//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main()
{

    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    ll t,i,j;

    cin>>t;
    getc(stdin);

    while (t--)
    {
        stack<char> st;
        char s[140];
        gets(s);

        ll len = strlen(s);
        for (i = 0; i < len; i++)
        {
            if (s[i] == '(' || s[i] == '[')
            {
                st.push(s[i]);
            }
            else if (s[i] == ')')
            {
                if (st.empty() || st.top() != '(')
                {
                    st.push('a');
                    break;
                }
                st.pop();
            }
            else if (s[i] == ']')
            {
                if (st.empty() || st.top() != '[')
                {
                    st.push('a');
                    break;
                }
                st.pop();
            }
        }

        if(st.empty())
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }


    return 0;
}
