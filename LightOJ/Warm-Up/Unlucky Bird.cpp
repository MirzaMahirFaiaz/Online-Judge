//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    double v1,v2,toron1,toron2,v3,somoy,somoy1,somoy2,durutto,ans;
	int  t,cs;

	cin>>t;

	for (cs = 1; cs <= t; cs++) {
            cin>>v1>>v2>>v3>>toron1>>toron2;

		somoy1 = v1 / toron1;
		somoy2 = v2 / toron2;

		somoy = max(somoy1, somoy2);


		ans = somoy * v3;
		durutto = v1 * somoy1 + 0.5 *( -toron1 * somoy1 * somoy1);
		durutto += v2 *somoy2 + 0.5 * (-toron2 * somoy2 * somoy2);
		std::cout << std::setprecision(9) << std::fixed;

		cout<<"Case "<<cs<<": "<<durutto<<" "<<ans<<endl;

	}

	return 0;
}
