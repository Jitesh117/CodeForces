#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

void solve()
{
    ll x,n;
    cin >> x >> n;
    ll t = n%4;
    ll ans;
    if(x&1)
    {
        if( t == 0)
            ans = x;
        else if(t == 1)
            ans = x+n;
        else if(t == 2)
            ans = x-1;
        else
            ans = x-n-1;
    }
    else
    {
        if( t == 0)
            ans = x-1;
        else if(t == 1)
            ans = x-n-1;
        else if(t == 2)
            ans = x+n;
        else
            ans = x;


    }
    cout << ans << endl;
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