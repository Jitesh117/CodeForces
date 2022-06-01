#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

void solve()
{
    ll k,n,w;
    cin >> k >> n >> w;
    ll last = w*k;
    ll mon = w*(k+last)/2;
    if(mon>n)
        cout << mon-n;
    else
        cout << 0;
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