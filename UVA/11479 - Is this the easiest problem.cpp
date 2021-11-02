#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

   ll t,a,b,c,i;
    cin>>t;
    for(i=1;i<=t;i++){

        cin>>a>>b>>c;
        if((a+b>c)&&(b+c>a)&&(a+c>b)){
            if(a==b&&a==c&&b==c){
                printf("Case %d: Equilateral\n", i);
            }
            else if(a==b||b==c||a==c){
                printf("Case %lld: Isosceles\n", i);
            }
            else{
                printf("Case %lld: Scalene\n", i);

            }

        }
        else{
            printf("Case %lld: Invalid\n",i);
        }
    }
    return 0;
}
