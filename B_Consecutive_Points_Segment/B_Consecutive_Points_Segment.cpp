#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

void solve()
{
    int n;
    cin >> n;
    vi v(n);
    for(int i = 0;i<n;i++)
        cin >> v[i];
    for(int i = 0;i<n-1;i++)
    {
        if(v[i+1]- v[i] >3)
            {
                cout << "NO" << endl;
                return;
            }
        
    }
    cout << "YES" << endl;
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