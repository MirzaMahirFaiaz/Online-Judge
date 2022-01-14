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

    ll t,i,j,m,n;
    cin >> m >> n;
    map<string, int> memo;
    for (i = 0; i < m; ++i)
    {
        string word;
        int value;
        cin >> word >> value;
        memo[word] = value;
    }
    for (i = 0;i<n; ++i)
    {
        string word;
        int salary = 0;
        while (cin >> word, word != ".")
            salary += memo[word];

        cout << salary << endl;
    }

return 0;
}
