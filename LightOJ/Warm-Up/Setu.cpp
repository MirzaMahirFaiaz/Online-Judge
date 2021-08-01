//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main()
{
    ll t,i,n,j,sum,x;
    string s;

    cin>>t;
    for(i=1;i<=t;i++){
        cin>>n;
        sum=0;
        cout << "Case " <<i<<":"<< endl;
        while(n--){
                cin >> s;
			if(s == "donate") {
				cin >> x;
				sum += x;
			}
			else {
				cout << sum << endl;;
			}

        }
    }
}
