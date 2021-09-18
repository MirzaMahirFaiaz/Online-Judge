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

    ll t,i,j,n;
    cin>>n;
    if(n<40){
        cout<<40-n<<endl;
    }
    else if(n<70){
        cout<<70-n<<endl;
    }
    else if(n<90){
        cout<<90-n<<endl;
    }
    else
        cout<<"expert"<<endl;

return 0;
}
