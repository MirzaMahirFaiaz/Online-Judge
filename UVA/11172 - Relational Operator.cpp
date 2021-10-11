#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
  ll t, b, c, i;
  cin>>t;
  while(t--){

      cin>>b>>c;
      if (b > c)
        cout<<">"<<endl;
      else if (b < c)
        cout<<"<"<<endl;
      else
        cout<<"="<<endl;
  }
  return 0;
}
