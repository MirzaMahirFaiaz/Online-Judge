//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main()
{

    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    ll t,i,j,l,tr[51];

    cin>>t;
    while(t--){
            cin>>l;
    int count=0,tmp;
    for(i=0;i<l;i++)
        cin>>tr[i];
    for(i=0;i<l-1;i++){
        for(j=l-1;j>i;j--){
            if(tr[j]<tr[j-1]){
                    tmp = tr[j];
					tr[j] = tr[j-1];
					tr[j-1] = tmp;
					count++;
            }
        }
    }
      cout<<"Optimal train swapping takes "<<count<<" swaps."<<endl;
    }

return 0;
}
