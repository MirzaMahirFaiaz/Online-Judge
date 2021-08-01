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

	int t;
	unsigned long long fact[22];
	long long x;

	fact[0] = 1;

	for (int i = 1; i <= 20; i++) {
		fact[i] = fact[i-1] * i;
	}

	cin>>t;

	for (int cs = 1; cs <= t; cs++) {
		cin>>x;
		stack <int> q;
		int i = 20;
		while(i >= 0) {
			if(fact[i] <=  x) {
				x -= fact[i];
				q.push(i);
			}

			i--;
		}

		if(x == 0) {
			cout<<"Case "<<cs<<": ";
			while(q.size() != 1) {
				cout<<q.top()<<"!+";
				q.pop();

			}

			cout<<q.top()<<"!"<<endl;
			q.pop();

		}

		else {
			cout<<"Case "<<cs<<": impossible"<<endl;
		}

	}

return 0;
}
