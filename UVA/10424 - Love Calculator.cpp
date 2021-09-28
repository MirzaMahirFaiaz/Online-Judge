//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

ll singled(ll temp){
ll sum;
while(temp>9){
        sum =0;
    while(temp!=0){
        sum+=temp%10;
        temp/=10;
    }
    temp=sum;
}
return temp;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j,sum,sum1;
    double ans;

    char a[40],b[40];

    while(gets(a)){
            gets(b);
            sum =sum1=0;
        for(i=0;i<strlen(a);i++){
                if(a[i]>='a'&&a[i]<='z')
                sum=sum+(a[i]-96);
        else if(a[i]>='A'&&a[i]<='Z')
            sum=sum+(a[i]-64);

        }

         for(i=0;i<strlen(b);i++){
                if(b[i]>='a'&&b[i]<='z')
                sum1=sum1+(b[i]-96);
        else if(b[i]>='A'&&b[i]<='Z')
            sum1=sum1+(b[i]-64);

        }
        sum1=singled(sum1);
        sum=singled(sum);
        //cout<<sum<<" "<<sum1<<endl;
        //ans= (double) (sum*1.0/sum1)*100;

            if (sum < sum1)
            printf("%.2f %%\n", sum * 100.0 / sum1);

        else
            printf("%.2f %%\n", sum1 * 100.0 / sum);

    }

return 0;
}
