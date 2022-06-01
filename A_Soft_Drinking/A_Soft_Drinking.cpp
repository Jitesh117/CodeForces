#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

void solve()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int drink = (k*l)/nl;
    int lime = c*d;
    int salt = p/np;
    int mintoast = min(lime,min(salt,drink));
    cout << mintoast/n;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    
    int n=1;
    while(n--)
    {
        solve();
    }
    return 0;
}