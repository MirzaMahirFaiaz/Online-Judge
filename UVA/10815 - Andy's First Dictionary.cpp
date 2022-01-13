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
    string in;
    set<string> words;

    while (cin >> in)
    {
        int sz = in.size();

        string current = "";
        for (i = 0; i < sz; ++i)
        {

            char c = tolower(in[i]);
            if (c >= 'a' && c <= 'z')
                current += c;
            else if (current != "")
            {
                words.insert(current);
                current = "";
            }
        }
        if (current != "")
            words.insert(current);
    }

    for (auto it = words.begin(); it!= words.end();it++)
        cout <<*it<<endl;

return 0;
}
