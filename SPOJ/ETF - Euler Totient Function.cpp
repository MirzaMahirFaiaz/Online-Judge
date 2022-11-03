//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;
int n=1000000;
vector<int> phi(1000001);

void phi_1_to_n() {

    for (int i = 0; i <= n; i++)
        phi[i] = i;

    for (int i = 2; i <= n; i++) {
        if (phi[i] == i) {
            for (int j = i; j <= n; j += i)
                phi[j] -= phi[j] / i;
        }
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    phi_1_to_n();

    ll t,i,j,in;
    cin>>t;
    while(t--){
        cin>>in;
        cout<<phi[in]<<endl;
    }

return 0;
}
