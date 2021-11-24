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
    string str;
    cin>>t;
    while(t--){

        cin>>n ;

        cin>>str ;
        ll cnt = 0 ;

        bool flag =false;  ;
        for(i=0 ;i<n;i++)
        {
            if(str[i] == '1')
            {
                flag = true ;
                break ;
            }
        }

        if(flag == false)
        {
            n= (n+1)/2;
            cout <<n<<endl;
        }
        else
        {
            for(i=0;i<n;i++)
            {
                if(i==0 && str[i] == '0' && str[i+1] == '0')
                {
                        cnt++ ;
                        str[i] = '1' ;
                }
                else if(i==(n-1) && str[i] == '0' && str[i-1] == '0')
                {
                        str[i] = '1' ;
                        cnt++;
                }
                else if(str[i]=='0' && str[i-1]=='0' && str[i+1]=='0')
                {
                        cnt++;
                        str[i] = '1';
                }
            }
            cout <<cnt<<endl;
        }
    }

return 0;
}
