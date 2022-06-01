#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

void solve()
{
    ll maxlen=1,len=1;
    ll n;
    cin >> n;
    vi v(n);
    for(int i= 0;i<n;i++)
        cin >> v[i];
    for(int i = 1;i<n;i++)
    {
        if(v[i]>v[i-1])
        {
            len++;
        }
        else
            len = 1;
        maxlen = max(maxlen,len);
    }
    cout << maxlen;

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