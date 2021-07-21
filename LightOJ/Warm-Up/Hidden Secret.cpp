//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
#include <ctype.h>

using namespace std;

int main()
{
    string str, str1;
    int i,n;
    scanf("%d\n",&n);
    for(i=1;i<=n;i++)
    {
      getline(cin,str);
      getline(cin,str1);

       int sum=0,j,k,sum1=0;
       j=str.size();
       for(k=0;str[k];k++)
        str[k]=tolower(str[k]);
       for(k=0;k<j;k++)
          if(str[k]!=' ')
          sum+=str[k];
      j=str1.size();
      for(k=0;str1[k];k++)
        str1[k]=tolower(str1[k]);
        for(k=0;k<j;k++)
        if(str1[k]!=' ')
          sum1+=str1[k];
        if(sum==sum1)
        printf("Case %d: Yes\n",i);
        else
        printf("Case %d: No\n",i);
    }
    return 0;

}
