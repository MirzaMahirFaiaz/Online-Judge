//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main()
{

//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

    ll py,pm,pd,by,bm,bd,cy,t,i;
    cin>>t;
    for( i=1;i<=t;i++){
        scanf("%ld/%ld/%ld",&pd,&pm,&py);
        scanf("%ld/%ld/%ld",&bd,&bm,&by);
        cy=py-by;
        if(bd>pd&&bm==pm){
            cy--;
        }
        if(bm>pm){
            cy--;
        }
        printf("Case #%d: ",i);

        if(cy<0)
             puts("Invalid birth date");
        else if(cy>130)
            puts("Check birth date");
        else
            cout<<cy<<endl;
    }
return 0;
}
