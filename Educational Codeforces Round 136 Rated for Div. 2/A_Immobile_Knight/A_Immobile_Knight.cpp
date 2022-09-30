#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;
void solve()
{
    int n, m;
    cin >> n >> m;
    if(n <=3 and m<=3)
        cout << n / 2 + 1 <<" " << m / 2 + 1;
    else
        cout << n << " " << m;
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