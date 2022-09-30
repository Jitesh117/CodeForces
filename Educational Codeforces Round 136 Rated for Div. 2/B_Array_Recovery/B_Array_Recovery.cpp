#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;
void solve()
{
    int n;
    cin >> n;
    vi v(n);
    for (int i = 0;i<n;i++)
        cin >> v[i];
    vi s(n);
    s[0] = v[0];
    for (int i = 1; i < n;i++){
        s[i] = v[i] + s[i-1];
        if( s[i-1] - v[i] >0 and v[i] != 0)
            {
                cout << -1 << endl;
                return;
            }
    }
    for(auto it:s)
        cout << it << " ";
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}