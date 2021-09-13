//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

ll rev(ll n){

ll rn=0;

while(n!=0){
    rn= (rn*10)+n%10;
    n/=10;
}
return rn;
}

bool isPalindrome(ll n){
    ll arr[10];
    ll sz=0;
    while(n){
        arr[sz++] = n%10;
        n /= 10;
    }

    for(int i = 0;i<sz-1-i;++i)
        if(arr[i]!=arr[sz-1-i])
            return false;

    return true;

}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j,n,r,cnt;
    cin>>t;
    while(t--){
        cin>>n;
        cnt=0;
        while(!isPalindrome(n)){
                n= n+ rev(n);
            cnt++;
        }
        cout<<cnt<<" "<<n<<endl;
    }

return 0;
}
