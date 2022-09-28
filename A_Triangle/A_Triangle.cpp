#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;
void solve()
{
    vi v(4);
    cin >> v[0] >>  v[1] >> v[2] >> v[3];
    sort(v.begin(), v.end());
    if(v[0] + v[1] > v[2] or v[1] + v[2] > v[3])
        cout << "TRIANGLE";
    else if( v[0] + v[1] == v[2] or v[1] + v[2] == v[3])
        cout << "SEGMENT";
    else
        cout << "IMPOSSIBLE";
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    
    // int t;
    // cin >> t;
    // while(t--)
    // {
        solve();
    // }
    // return 0;
}