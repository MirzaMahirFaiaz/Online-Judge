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

    ll t,i,j,sz,num;
    double C=12.01,N=14.01,H=1.008,O=16.00,molm,ans;
        string s;
    cin>>t;
    while(t--){
             ans=0;

            cin>>s;
            sz=s.size();
            for(i=0;i<sz;){
                if(s[i]=='C')
                   molm=12.01;
                else if(s[i]=='O')
                    molm=16.00;
                else if(s[i]=='N')
                    molm=14.01;
                else
                    molm=1.008;
    num=0;
    if(!(s[i] >= '0' && s[i] <= '9'))
        i++;

                while (s[i] >= '0' && s[i] <= '9'){
				num = num * 10 + (s[i] - '0');
				 i++;
                }
			if (num == 0)
				num = 1;

        ans+=molm*num;
        //cout<<molm<<" "<<molm*num<<endl;

            }
            printf("%.3lf\n", ans);
    }


return 0;
}
