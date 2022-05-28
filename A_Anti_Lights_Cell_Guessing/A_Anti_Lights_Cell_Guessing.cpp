#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

void solve()
{
    int n,m;
    cin >> n >> m;
    if(n == 1 and m ==1)
        cout << "0\n";
    else if(n == 1 or m == 1)
        cout << "1\n";
    else
        cout << "2\n";
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