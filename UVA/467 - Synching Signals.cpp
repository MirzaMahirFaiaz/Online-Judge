//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
const int INF = 0x3f3f3f3f;
using namespace std;

char str[1005];
int n, c[15];

inline bool isDight (char ch) {
    return ch >= '0' && ch <= '9';
}

void init () {
    n = 0;
    int num = 0, len = strlen(str);
    for (int i = 0; i <= len; i++) {
        if (isDight(str[i]))
            num = num * 10 + str[i] - '0';
        else {
            c[n++] = num;
            num = 0;
        }
    }
}

bool judge (int u) {
    for (int i = 0; i < n; i++) {
        int d = u % (2 * c[i]);

        if (d >= c[i] - 5)
            return false;
    }
    return true;
}


int main()
{

   // ios_base::sync_with_stdio(false);
   // cin.tie(NULL);

    ll t,i,j;
    int cas = 1;
    while (gets(str) != NULL) {
        init();

        int s = INF;
        for (int i = 0; i < n; i++)
            s = min(s, c[i]);
        s -= 5;

        bool flag = true, t = true;
        for (int u = s+1; u <= 3600; u++) {

            if (t) {
                if (judge(u))
                    t = true;
                else
                    t = false;
            } else {
                if (judge(u)) {
                    flag = false;
                    cout<<"Set "<<cas++<<" synchs again at "<<u/60<<" minute(s) and "<<u%60<<" second(s) after all turning green.\n";
                    break;
                }
            }
        }

        if (flag)
           cout<<"Set "<<cas++<<" is unable to synch after one hour.\n";
    }

return 0;
}
