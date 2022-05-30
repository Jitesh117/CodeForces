#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

void solve()
{
    ll n;
    cin >> n;
    if(n&1 or n<=3)
        cout << -1 << endl;
    else
    {
        n/=2;
        ll temp1 = n/3;
        if(n%3 == 1 or n%3 == 2)
            temp1++;
        ll temp2 = n/2;
        cout << min(temp1,temp2) << " " << max(temp1,temp2) << endl;
    }
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