#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

void solve()
{
   long long n, m;
        cin >> n >> m;
        long long sum=0, minval=1e9, maxval=0;
        for (int i=1; i<=n; i++) {
            long long x;
            cin >> x;
            sum+=x;
            minval=min(minval, x);
            maxval=max(maxval, x);
        }
        if(n+sum-minval+maxval<=m)
            cout << "YES" << endl;
        else
            cout <<"NO" << endl;
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