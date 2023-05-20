//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
#define mod 1000000007
using namespace std;

 int factorial[1000007], inversefactorial[1000007];

namespace PollardRho
{
mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());
const int P = 1e6 + 9;
ll seq[P];
int primes[P], spf[P];
inline ll add_mod(ll x, ll y, ll m)
{
    return (x += y) < m ? x : x - m;
}
inline ll mul_mod(ll x, ll y, ll m)
{
    ll res = __int128(x) * y % m;
    return res;
    // ll res = x * y - (ll)((long double)x * y / m + 0.5) * m;
    // return res < 0 ? res + m : res;
}
inline ll pow_mod(ll x, ll n, ll m)
{
    ll res = 1 % m;
    for (; n; n >>= 1)
    {
        if (n & 1) res = mul_mod(res, x, m);
        x = mul_mod(x, x, m);
    }
    return res;
}
// O(it * (logn)^3), it = number of rounds performed
inline bool miller_rabin(ll n)
{
    if (n <= 2 || (n & 1 ^ 1)) return (n == 2);
    if (n < P) return spf[n] == n;
    ll c, d, s = 0, r = n - 1;
    for (; !(r & 1); r >>= 1, s++) {}
    // each iteration is a round
    for (int i = 0; primes[i] < n && primes[i] < 32; i++)
    {
        c = pow_mod(primes[i], r, n);
        for (int j = 0; j < s; j++)
        {
            d = mul_mod(c, c, n);
            if (d == 1 && c != 1 && c != (n - 1)) return false;
            c = d;
        }
        if (c != 1) return false;
    }
    return true;
}
void init()
{
    int cnt = 0;
    for (int i = 2; i < P; i++)
    {
        if (!spf[i]) primes[cnt++] = spf[i] = i;
        for (int j = 0, k; (k = i * primes[j]) < P; j++)
        {
            spf[k] = primes[j];
            if (spf[i] == spf[k]) break;
        }
    }
}
// returns O(n^(1/4))
ll pollard_rho(ll n)
{
    while (1)
    {
        ll x = rnd() % n, y = x, c = rnd() % n, u = 1, v, t = 0;
        ll *px = seq, *py = seq;
        while (1)
        {
            *py++ = y = add_mod(mul_mod(y, y, n), c, n);
            *py++ = y = add_mod(mul_mod(y, y, n), c, n);
            if ((x = *px++) == y) break;
            v = u;
            u = mul_mod(u, abs(y - x), n);
            if (!u) return __gcd(v, n);
            if (++t == 32)
            {
                t = 0;
                if ((u = __gcd(u, n)) > 1 && u < n) return u;
            }
        }
        if (t && (u = __gcd(u, n)) > 1 && u < n) return u;
    }
}
vector<ll> factorize(ll n)
{
    if (n == 1) return vector <ll>();
    if (miller_rabin(n)) return vector<ll> {n};
    vector <ll> v, w;
    while (n > 1 && n < P)
    {
        v.push_back(spf[n]);
        n /= spf[n];
    }
    if (n >= P)
    {
        ll x = pollard_rho(n);
        v = factorize(x);
        w = factorize(n / x);
        v.insert(v.end(), w.begin(), w.end());
    }
    return v;
}
}


ll nCr(int n, int r)
{
    ll ans =1;
    ans = ans *factorial[n] * inversefactorial[r] % mod;
    //cout<<"\nfactorial["<<n<<"] * inversefactorial["<<r<<"] % mod"<<ans<<endl;
   // cout<<"inversefactorial[n - r] n-"<<n<<" & r-"<<r<<" "<<inversefactorial[n - r]<<endl;
    ans= ans * inversefactorial[n - r] % mod;

    return ans;

}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j;
    ll n,a,b,d;
    PollardRho::init();
    factorial[0] = inversefactorial[0] = 1;
    for(i = 1; i < 1000005; ++i)
    {
        factorial[i] = factorial[i - 1] * i % mod;
        inversefactorial[i] = PollardRho::pow_mod(factorial[i], mod - 2,mod);
    }

    while(cin>>n>>a>>b>>d)
    {
        ll ans =1;
        ans = nCr(b, d);
       // cout<<"bCd- "<<ans<<endl;
        ans=PollardRho::pow_mod(ans, a,mod);
        //cout<<"pow_mod(ans, a,mod)"<<ans<<endl;
        //cout<<"nCa- "<<nCr(n, a)<<endl;



        cout<< (nCr(n, a) * ans % mod)<<endl;

    }

    return 0;
}
