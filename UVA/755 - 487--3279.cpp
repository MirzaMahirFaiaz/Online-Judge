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
    char str[100], nstr[100];
    string ch = "22233344455566677778889991";
    cin>>t;
    while(t--) {
        cin>>n;
        map<string, int> record;
        getchar();
        int i, j;
        while(n--) {
            gets(str);

            for(i = 0, j = 0; str[i]; i++) {
                if(str[i] >= '0' && str[i] <= '9')
                    nstr[j++] = str[i];
                else if(str[i] >= 'A' && str[i] <= 'Z')
                    nstr[j++] = ch[str[i]-'A'];
                if(j == 3)
                    nstr[j++] = '-';
            }
            nstr[j] = '\0';
            record[nstr]++;
        }
        int flag = 0;
        for(map<string, int>::iterator i = record.begin(); i != record.end(); i++) {
            if(i->second != 1) {
                flag = 1;
                cout << i->first << ' ' << i->second << endl;
            }
        }
        if(!flag)
            cout<<"No duplicates."<<endl;
        if(t)
            puts("");
    }



return 0;
}
