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

    char kb[47] = {'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P', 91, 93, 92,
                     'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 59, 39,
                     'Z', 'X', 'C', 'V', 'B', 'N', 'M', 44, 46, 47,
                     '`', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', 45, 61} ;
while(getline(cin,s)){

        for(int i = 0;i<s.size(); i++)
        {
//            if(s[i]>64&&s[i]<91)
//                s[i]+=32;
            if((s[i] == ' ')||(s[i] == '\n'))
                cout << s[i] ;
            else
            {
                for(int j = 1; j < 47; j++)
                {
                    if(s[i] == kb[j])
                    {
                        cout << kb[j-1] ;
                        break ;
                    }
                }
            }
        }
        cout << endl ;
}
return 0;
}
