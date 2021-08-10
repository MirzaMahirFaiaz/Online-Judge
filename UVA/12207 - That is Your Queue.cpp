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

    ll t,i,j,p,c,x;
    string str;

    int cs = 1 ;
    while( cin>>p>>c ){
        if( p == 0 && c == 0 )
            break ;
        deque<ll>q;
        for( i = 1 ; i <= p && i <= 1000 ; i++ )
        q.push_back(i);

        cout<<"Case "<<cs<<":"<<endl;
        cs++;
        while(c--) {
            cin>>str;
            if( str[0] == 'N' ) {
                x = q.front() ;
                q.pop_front();
                q.push_back(x);
                cout<<x<<endl;
            }
            else {
                cin>>x;
                for(auto it=q.begin();it!=q.end();it++){
                    if(*it == x ){
                    q.erase(it);
                    break;
                    }
                }
                q.push_front(x);
            }
        }
    }

return 0;
}
