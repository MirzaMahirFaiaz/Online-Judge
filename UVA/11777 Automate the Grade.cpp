#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tr1,tr2,at,fe,ct1,ct2,ct3,i,t,c,sum;

    cin>>t;


       for(i=1;i<=t;i++){

        cin>>tr1>>tr2>>fe>>at>>ct1>>ct2>>ct3;
        if(ct1<=ct2&&ct1<=ct3)
            c=(ct2+ct3)/2;
        else if(ct2<=ct1&&ct2<=ct3)
            c=(ct1+ct3)/2;
        else if(ct3<=ct1&&ct3<=ct2)
            c=(ct1+ct2)/2;
        sum=tr1+tr2+at+fe+c;
        if(sum>=90)
            printf("Case %d: A\n",i);
        else if(sum>=80)
            printf("Case %d: B\n",i);
        else if(sum>=70)
            printf("Case %d: C\n",i);
        else if(sum>=60)
            printf("Case %d: D\n",i);
        else if(sum<60)
            printf("Case %d: F\n",i);


                    }
                return 0;
}
