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
           cin >>str ;
        ll len = str.size() ;
        bool flag = false ;
        for(i = len - 1 ; i >= 0 ; i--){
            if(str[i] == '5'){
                for(j = i - 1 ; j >=0 ; j--){
                    if(str[j] == '2' || str[j] == '7'  ){
                        flag = true ;
                        break ;
                    }
                }
                if(flag) break ;
            }

            else if(str[i] == '0'){
                for(j = i -1  ; j >=0 ; j--){
                    if(str[j] == '5' || str[j] == '0'  ){
                        flag = true ;
                        break ;
                    }
                }
                if(flag) break ;
            }

        }
        ll ans1 = ( i - j - 1 ) + (( len - 1 ) - i);

        for(i = len - 1 ; i >= 0 ; i--)
        {
            if(str[i] == '0')
            {
                for(j = i -1  ; j >=0 ; j--)
                {
                    if(str[j] == '5' || str[j] == '0'  )
                    {
                        flag = true ;
                        break ;
                    }
                }
                if(flag) break ;
            }

        }
         ll ans2 = ( i - j - 1 ) + (( len - 1 ) - i) ;
        cout << min(ans1 , ans2 ) <<endl;

    }



return 0;
}
