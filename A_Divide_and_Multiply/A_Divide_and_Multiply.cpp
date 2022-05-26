#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

void solve()
{   
    int a;
    int n;
    vi v(n);
    for(int i = 0;i<n;i++)
        cin >> v[i];
    int count = 0;
    while(1)
    {
        for(int i = 0;i<n;i++)
            if(v[i]%2 == 0)
                v[i]/=2;
            else
                break;

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