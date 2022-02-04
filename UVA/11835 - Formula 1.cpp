//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;
const int n = 105;

int g, p, s, K, x, grand[n][n], k[n], score[n];
int winner[n], sz;


int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j,k;
    while (cin >> g >> p, g || p) {
		for (i = 0; i < g; ++i) {
			for (j = 1; j <= p; ++j) {
				cin >> x;
				grand[i][x] = j;
			}
		}
		cin >> s;
		for (i = 1; i <= s; ++i) {
			cin >> K;
			for (j = 1; j <= p; ++j)
				score[j] = 0;
			for (j = 1; j <= K; ++j) {
				cin >> x;
                for (k = 0; k < g; ++k) {
					int pilot = grand[k][j];
					score[pilot] += x;
				}
			}
			sz = 0;
			winner[sz++] = 1;
			for (j = 2; j <= p; ++j) {
				if (score[j] > score[winner[0]]) {
					sz = 0;
					winner[sz++] = j;
				}
				else if (score[j] == score[winner[0]])
					winner[sz++] = j;
			}
			for (j = 0; j < sz; ++j) {
				if (j) cout << ' ';
				cout << winner[j];
			}
			cout <<endl;
		}
	}
	cout << flush;



return 0;
}
