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


    cin >> t;

    for (int i = 1; i <= t;i++)
    {
        int b=0,w=0,a=0,d=0;

        cin >> n;

        for (int i = 0; i < n; ++i)
        {
            char in;
            cin >> in;
            switch (in)
            {
            case 'B':
                b++;
                break;
            case 'W':
                w++;
                break;
            case 'A':
                a++;
                break;
            default:
                d++;
                break;
            }
        }

        cout << "Case " << i << ": ";

        if (a == n)
            cout << "ABANDONED";
        else if (b == w)
            cout << "DRAW " << b << ' ' << d;
        else if (w + a == n)
            cout << "WHITEWASH";
        else if (b + a == n)
            cout << "BANGLAWASH";
        else
        {
            if (b > w)
                cout << "BANGLADESH " << b << " - " << w;
            else
                cout << "WWW " << w << " - " << b;
        }
        cout << '\n';
    }



return 0;
}
