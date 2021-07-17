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

	ll a[1000],n,t,x,y,q;
	char choice;

	cin >> t;

	for (int cs = 1; cs <= t; cs++) {
		cin >> n;
		cin >> q;

		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		for (int k = 0; k < q; k++) {

			cin >> choice;
			switch(choice) {
				case 'S':
					cin >> x;
					for (int i = 0; i < n; i++) {
						a[i] += x;
					}

					break;

				case 'M':
					cin >> x;
					for (int i = 0; i < n; i++) {
						a[i] *= x;
					}

					break;

				case 'D':
					cin >> x;
					for (int i = 0; i < n; i++) {
						a[i] /= x;
					}

					break;

				case 'R':
					for (int i = 0, j = n-1; i < j; i++, j--) {
						swap(a[i], a[j]);
					}
					break;

				case 'P':
					cin >> x;
					cin >> y;
					swap(a[x], a[y]);
					break;

			}



		}

		cout<<"Case "<<cs<<":"<<endl;

		for (int i = 0; i < n; i++) {
			cout<<a[i];
			if(i != n-1) {
			cout<<" ";
			}

			else {
				cout<<'\n';
			}

		}





	}


}
