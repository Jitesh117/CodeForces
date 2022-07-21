#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;
void solve()
{
    int hm,dm,hc,dc;
    int k,w,a;
    cin >> hc >> dc;
    cin >> hm >> dm;
    cin >> k >> w >> a;
    if(ceil(hc/dm)>ceil(hm/dc))
        {
            cout << "YES\n";
            return;
        }
    else
    {
        for(int i = 0;i<=k;i++)
        {
            int nhc =hc+i*a;
            int nhm =hm-(k-i)*w;
            if(ceil(nhc/dm)>ceil(nhm/dc))
                {
                    cout << "YES\n";
                    return;
                }
        }
    }
    cout << "NO\n";
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