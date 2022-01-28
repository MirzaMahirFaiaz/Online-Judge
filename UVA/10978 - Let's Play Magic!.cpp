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
    ll cards;
    while(cin>>cards && cards)
	{
		string name;
		string word;
		ll currentIndex = -1;
		vector<string> deck(cards, "");

		for(i = 0;i<cards; ++i)
		{
			cin >> name >> word;

			int length = word.length();

			while(length)
			{
				currentIndex = (currentIndex + 1) % cards;
				if(deck[currentIndex] == "")
					--length;
			}

			deck[currentIndex] = name;

		}

		for(i = 0; i < cards; ++i){
			cout <<deck[i];
			if(i + 1 < cards)
                cout<<" ";
            else
                cout<<endl;
		}
	}

return 0;
}
