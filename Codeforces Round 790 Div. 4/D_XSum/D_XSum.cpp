#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin >> n >> m;
    int c[n][m];
    for(int i = 0;i<n;i++)
        for(int j = 0;j<m;j++)
            cin >> c[i][j];
    int mx = 0;
    for(int i = 0;i<n;i++)
        for(int j = 0;j<m;j++)
        {
            int sum = 0;
            int ci = i,cj = j;
            while(ci>=0 && ci<n && cj>=0 && cj<m)
            {
                sum+=c[ci][cj];
                ci--,cj--;
            }
            ci = i,cj = j;
            while(ci>=0 && ci<n && cj>=0 && cj<m)
            {
                sum+=c[ci][cj];
                ci++,cj--;
            }
            ci = i,cj = j;
            while(ci>=0 && ci<n && cj>=0 && cj<m)
            {
                sum+=c[ci][cj];
                ci--,cj++;
            }
            ci = i,cj = j;
            while(ci>=0 && ci<n && cj>=0 && cj<m)
            {
                sum+=c[ci][cj];
                ci++,cj++;
            }
            sum-=3*c[i][j];
            mx = max(mx,sum);
        }
        cout << mx << endl;
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