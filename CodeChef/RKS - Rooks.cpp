//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int row[1000007],col[1000007];
vector<int> vec1,vec2;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j,n,k,r,c,sz;

    cin>>t;
    while(t--){

  		cin>>n>>k;
  		for(i=0;i<=n+1;i++){
  			row[i]=0;
  			col[i]=0;
  		}

  		for(i=0;i<k;i++){
  			cin>>r>>c;
  			row[r]=1;
  			col[c]=1;
  		}
  		cout<<n-k<<" ";

  		for(i=1;i<=n;i++){
  			if(!row[i])
  				vec1.push_back(i);
  			if(!col[i])
  				vec2.push_back(i);
  		}
  		sz= vec1.size();
  		for(i=0;i<sz;i++){
  			cout<<vec1[i]<<" "<<vec2[i]<<" ";
  		}
  		cout<<endl;
  		vec1.clear();
  		vec2.clear();
    }
return 0;
}
