#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;
void solve()
{
    int n, m, x, y, d;
    cin >> n >> m >> x >> y >> d;
    if (min(n - x, y - 1) <= d and min(x - 1, m - y) <= d)
        cout << -1 << endl;
    else
        cout << n + m - 2 << endl;
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