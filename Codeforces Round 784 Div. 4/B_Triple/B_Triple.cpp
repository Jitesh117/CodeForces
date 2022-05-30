#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int t;
    cin >> t;
    int ans=-1;
    vector<int>v(t+1,0);
    for(int i = 0;i<t;i++)
    {
        int n;
        cin >> n;
        if(++v[n]>=3)
            ans = n;
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