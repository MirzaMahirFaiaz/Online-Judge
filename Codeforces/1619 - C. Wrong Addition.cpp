//Wrong Answer
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

    ll t,i,j;
    cin>>t;
    while(t--){
           string a,b;
        cin>>a>>b;
        if(a==b)
        {
            cout<<0<<endl;
            continue;
        }
        if(b.size()<a.size())
        {
            cout<<-1<<endl;
            continue;
        }
        string ans;
        int x=b.size()-1;
        for(i=a.size()-1;i>=0;i--)
        {
            if(x<0)
            {
                ans="-1";
                break;
            }
            int l=a[i]-'0';
            int r=b[x]-'0';
            string z;

            if(l==r)
            {
                z+='0';
                ans=z+ans;
            }
            else if(l<r)
            {
                int xx=r-l;
                z+=(xx+'0');
                ans=z+ans;
            }
            else{
                int n=b[x]-'0';
                x--;
                if(x<0)
                {
                    ans="-1";
                    break;
                }
                else{
                    n=(b[x]-'0')*10 + n;
                    int m=n-l;
                    if(m<0 || m>9)
                    {
                        ans="-1";
                        break;
                    }
                    else{
                        z+=(m+'0');
                        ans=z+ans;
                    }
                }
            }
            x--;

        }
        string z;
        for(i=0;i<=x;i++)
            z+=b[i];
        if(ans!="-1")
        ans=z+ans;
        while(ans[0]=='0')
        {
            ans.erase(ans.begin());
        }
        cout<<ans<<endl;
    }

return 0;
}
