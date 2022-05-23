#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

void solve()
{
    int l, r, x;
    cin >> l >> r >> x;
    int ans = r / x + r % x;
    int m = r - r%x -1;
    if(m >= l)
        ans = max(ans, m / x + m % x);
    cout << ans <<endl;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    
    int n;
    cin >> n;
    while(n--)
    {
        solve();
    }
    return 0;
}