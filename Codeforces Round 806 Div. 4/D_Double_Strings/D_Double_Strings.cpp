#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;
void solve()
{
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n;i++)
    {
        bool flag = false;
        string si = v[i];
        for (int j = 0; j < n and flag == false;j++)
        {
            string sj = v[j];
            for (int k = 0; k < n and flag == false;k++)
            {
                string sk = v[k];
                if(sj+sk == si or sk+sj == si)
                    flag = true;
            }
        }
        if(flag)
            cout << 1;
        else
            cout << 0;
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}