#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

void solve()
{
    string s;
    cin >> s;
    vi v(26,0);
    for(int i = 0;i<s.size();i++)
        v[s[i]-'a']++;
    int t =s[0] - 'a';
    int cnt = v[t];
    unordered_set<char> res;
    for(int i = 0;i<26;i++)
        if(v[i]>0 and v[i]!=cnt)
            {
                cout << -1;
                return;
            }
        else
        {
            res.insert(v[i]+'a');
        }
    
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