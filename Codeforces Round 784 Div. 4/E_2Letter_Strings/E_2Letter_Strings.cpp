#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<string> v(n);
    for(int i = 0;i<n;i++)
    {
        cin >> v[i];
    }
    int sum =0;
    for(int i = 0;i<n-1;i++)
        for(int j = i+1;j<n;j++)
        {
            int diff =0;
            if(v[i][0]!=v[j][0]) diff++;
            if(v[i][1]!=v[j][1]) diff++;
            if( diff == 1)
                sum++;
        }
    cout << sum << endl;
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