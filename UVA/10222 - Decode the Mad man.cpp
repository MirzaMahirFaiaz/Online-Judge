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
    string s ;
    getline(cin,s);
    char kb[47] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 91, 93, 92,
                     'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 59, 39,
                     'z', 'x', 'c', 'v', 'b', 'n', 'm', 44, 46, 47,
                     '`', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', 45, 61} ;


        for(int i = 0;i<s.size(); i++)
        {
            if(s[i]>64&&s[i]<91)
                s[i]+=32;
            if((s[i] == ' ')||(s[i] == '\n'))
                cout << s[i] ;
            else
            {
                for(int j = 1; j < 47; j++)
                {
                    if(s[i] == kb[j])
                    {
                        cout << kb[j-2] ;
                        break ;
                    }
                }
            }
        }
        cout << endl ;

return 0;
}
