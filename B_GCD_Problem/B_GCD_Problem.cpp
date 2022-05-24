#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

void solve()
{
    int n = 1;
    cin >> n;
    int t = n-1;
    if(t&1)
    {
        cout << t/2 << " " << t/2+1 << " " << 1 << endl;
    }
    else
    {
       if((t/2)&1)
            cout << t/2-2 << " " << t/2+2 << " " << 1 << endl;
        else
            cout << t/2-1 << " " << t/2+1 << " " << 1 << endl;
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