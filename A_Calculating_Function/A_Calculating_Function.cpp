#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;
void solve()
{
    long long n;
    cin >> n;
    if (n % 2 != 0)
        cout << -(n + 1) / 2;
    else
        cout << n / 2;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    solve();
    return 0;
}