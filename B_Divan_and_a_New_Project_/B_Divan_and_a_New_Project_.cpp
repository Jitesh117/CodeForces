#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

void solve()
{
    int n = 1;
    cin >> n;
    vector<pair<int,int>> arr(n);
    for(int i = 0;i<n;i++)
        {
            int t;
            cin >> t;
            arr[i] = {t,i};
        }
    sort(arr.begin(),arr.end());
    int x0= 0;
    ll curx= 1, ansdis= 0;
    vi ans(n,1e9);
   
    for (int i=n-1;i>=0;--i) {
        int visidx = arr[i].second;
        int viscur = arr[i].first;
        ans[visidx] = curx;
        ansdis+=2*abs(curx)*viscur;
        if(curx>0)
            curx=-curx;
        else
            curx=-curx+1;
    }
   
    cout << ansdis << "\n";
    cout << 0; 
    for (int i=0; i < n; ++i) 
    cout << " " << ans[i];   
    cout << "\n";
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