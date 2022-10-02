#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;

#define nline  "\n"
#define pb push_back
#define PI 3.141592653589793238462

bool isprime(int x)
{
    long long n = INT_MAX;
    vector<int> v(n + 1, 1);
    for (int i = 2; i <= n; i++)
    {
        if (v[i])
            continue;
        for (int j = i * 2; j <= n; j += i)
        {
            v[j] = 0;
        }
    }
    return v[x];
}

vector<int> factor(int n)
{
    vector<int> f;
    for (int x = 2; x * x <= n; x++)
    {
        while (n % x == 0)
        {
            f.push_back(x);
            n /= x;
        }
    }
    if (n > 2)
        f.push_back(n);
    return f;
}

ll gcd(ll a, ll b)
{
    if (b > a)
    {
        return gcd(b, a);
    }
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int modpow(int x, int n, int m)
{
    if (n == 0)
        return 1 % m;
    long long u = modpow(x, n / 2, m);
    u = (u * u) % m;
    if (n % 2 == 1)
        u = (u * x) % m;
    return u;
}

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll x = a * d, y = b * c;
    if( x == y)
        cout << 0 << nline;
    else if((y !=0 and x%y == 0 ) or (x !=0 and y%x == 0))
        cout << 1 << nline;
    else
        cout << 2 << nline;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}