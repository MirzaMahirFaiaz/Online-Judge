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
    while (1)
	{
		vector<int> cards;
		cin >> n;
		if (!n)
			break;
		for (int i = 1; i <= n; i++)
			cards.push_back(i);

		cout << "Discarded cards:";
		while (cards.size() >= 2)
		{
			ll a = cards.front();
			cards.erase(cards.begin());
			cout << " " << a;
			if (cards.size() != 1)
				cout << ",";
			ll b = cards.front();
			cards.push_back(b);
			cards.erase(cards.begin());
		}
		cout << "\nRemaining card: ";
		cout << cards.front() << endl;
	}

return 0;
}
