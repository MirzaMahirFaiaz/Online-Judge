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

    ll t,i,j,n;
    while(cin>>n,n){
         cin.ignore();

        vector<int> spaces(n);
        int minSpaces = -1;

        string line;

        for (int i = 0; i < n; ++i)
        {
            getline(cin, line);
            int spaceCount = 0;
            for (string::const_iterator iter = line.begin(); iter != line.end(); ++iter)
            {
                if (*iter != 'X')
                    ++spaceCount;
            }

            spaces[i] = spaceCount;
            if (spaceCount < minSpaces || minSpaces == -1)
                minSpaces = spaceCount;
        }

        int total = 0;
        for (int i = 0; i < n; ++i)
            total += spaces[i] - minSpaces;

        cout << total << '\n';
    }


return 0;
}
