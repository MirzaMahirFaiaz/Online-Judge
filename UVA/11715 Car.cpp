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

    ll i,j,q,cnt=1;
    //v = u + at
	// s = ut + .5 a t^2
	//v^2 = u^2+ 2as
    double u,a,t,v,s;

    while(1){
        cin>>q;
        if(q==0)
            break;
            printf("Case %d: ",cnt);
            cnt++;
        switch(q){
    case 1 :
        cin>>u>>v>>t;
        printf("%.3lf %.3lf\n",(u*t)+(0.5*((v-u))*t),(v-u)/t);
        break;

    case 2 :
        cin>>u>>v>>a;
        t=((v-u)/a);
        printf("%.3lf %.3lf\n",u*t+(0.5*a*t*t),t);
        break;

    case 3 :
        cin>>u>>a>>s;
        v=sqrt((u*u)+2*a*s);
        printf("%.3lf %.3lf\n",v,(v-u)/a);
        break;

    case 4 :
        cin>>v>>a>>s;
        u=sqrt((v*v)-2*a*s);
        printf("%.3lf %.3lf\n",u,(v-u)/a);
        break;

        }

    }
return 0;
}
