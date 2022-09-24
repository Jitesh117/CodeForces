#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    int result = INT_MAX;
    sort(v.begin(), v.end());
    for (int i = 0; i <= v.size() - 3;i++){
        int temp = abs(v[i] - v[i + 1]) + abs(v[i + 1] - v[i + 2]);
        result = min(result, temp);
    }
    cout << result << endl;
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