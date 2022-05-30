#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

void solve()
{
   int n;
        cin >> n;
        map <int, int> d;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            d[x]++;
        }
        int cnt = 0;
        for (auto i : d) {
            ++cnt;
        }
      
        for (int k = 1; k <= n; ++k) {
            cout << max(k, cnt) << " ";
        }
        cout << "\n";
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