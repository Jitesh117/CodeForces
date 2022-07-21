#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;
void solve()
{
    unordered_map<char, int> umap;
    int n;
    string s;
    cin >> n >> s;
    int result = 0;
    for (int i = 0; i < n;i++)
    if(umap[s[i]]!=0)
        result++;
    else
        {
            result += 2;
            umap[s[i]]++;
        }
    cout << result << endl;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}