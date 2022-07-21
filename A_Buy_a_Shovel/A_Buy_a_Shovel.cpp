#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

void solve()
{
    int k,r;
    cin >> k >>r;
    int h=1,i=0;
    bool b = true;
    while (b) {
        i++;
        h = k * i;
        if (h % 10 == 0 || h % 10 == r) {
            b = false;
        }
    }
    cout << i;
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