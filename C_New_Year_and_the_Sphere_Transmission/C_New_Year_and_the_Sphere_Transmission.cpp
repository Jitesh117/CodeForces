#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

void solve()
{
   ll N; cin >> N;
	vector<ll> ans;

	for (ll i = 1; i*i <= N; ++i) {
		if (N%i==0) {
			ans.push_back(N*(i-1)/2 + i);
			if (i*i!=N) {
				ans.push_back(N*(N/i-1)/2 + N/i);
			}
		}
	}
	sort(ans.begin(),ans.end());
	
	for (int i = 0; i < ans.size(); ++i) {
		cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    
    int n;
    n =1;
    while(n--)
    {
        solve();
    }
    return 0;
}