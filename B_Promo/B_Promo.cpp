#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;
void solve()
{
    int n, q;
    cin >> n >> q;
    vl v(n), s(n + 1);
    for (auto &i : v)
        cin >>i;
    sort(v.begin(), v.end());
    for (int i = 0; i < n; ++i)
        s[i + 1] = s[i] + v[i];
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        cout << s[n - x + y] - s[n - x] << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    solve();
    return 0;
}