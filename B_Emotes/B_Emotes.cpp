#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long > vl;

void solve()
{
    ll n,m,k;
    cin >> n >> m >> k;
    vl v(n);
    for(int i = 0;i<n;i++)
        cin >> v[i];
    sort(v.rbegin(),v.rend());
    ll sum = m/(k+1)*(k*v[0]+v[1]) + m%(k+1)*v[0];
    cout << sum;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    
    int n=1;
    // cin >> n;
    while(n--)
    {
        solve();
    }
    return 0;
}