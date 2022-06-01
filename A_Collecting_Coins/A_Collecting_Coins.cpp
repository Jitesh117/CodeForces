#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

void solve()
{
    vi v(3);
    int n;
    cin >> v[0] >> v[1] >> v[2] >> n;
    sort(v.begin(),v.end());
    n-=2*v[2]-v[0]-v[1];
    if(n<0 or n%3!=0)
        cout << "NO\n";
    else
        cout << "YES\n";
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    
    int n=1;
    cin >> n;
    while(n--)
    {
        solve();
    }
    return 0;
}