#include<bits/stdc++.h>
using namespace std;
typedef long long li;
typedef vector<int> vi;

void solve()
{
     int n;
    li h;
    cin >> n >> h;
    vector<li> a(n);
    for (li &x : a) cin >> x;
    li beg = 1, end = 1e18;
    while (beg <= end) {
      li m = (beg + end) / 2;
      li sum = m;
      for (int i = 0; i < n - 1; ++i) 
        sum += min(m, a[i + 1] - a[i]);
      if (sum < h) 
        beg = m + 1;
      else end = m - 1;
    }
    cout << end + 1 << '\n';

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