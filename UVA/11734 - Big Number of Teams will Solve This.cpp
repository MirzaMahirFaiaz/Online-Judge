//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

string withoutspace(string x){
    string y;
    for(int i = 0;x[i]; i++){
        if(x[i] != ' ')
            y.push_back(x[i]);
    }
    return y;
}
int main()
{

    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    ll t,i,j;
    string a , b;
    cin >> t;
    getchar();
    fflush(stdin);
    for(i = 1; i <= t; i++){
        getline(cin , a);
        getline(cin , b);
        if(a == b)
            cout << "Case " << i << ": Yes\n";
        else{
            a = withoutspace(a);
            b = withoutspace(b);
            if(a == b)
                cout << "Case " <<i<< ": Output Format Error"<<endl;
            else cout << "Case " <<i<< ": Wrong Answer"<<endl;
        }
    }
return 0;
}
