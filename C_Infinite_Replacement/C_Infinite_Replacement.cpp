#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

void solve()
{
    string s,t;
    cin >> s >> t;
    sort(t.begin(),t.end());

   if(t == "a")
        cout << 1<< endl;
   else
   { int cnt=0;
    for(int i = 0;i<t.size();i++)
        if(t[i] == 'a')
            cnt++;
    if(cnt!=0)
        cout << -1 << endl;
    else
        
        {
            ll result = 1LL;
            ll c = s.size();
            while(c--)
            {
                result*=2LL;
            }
            cout << result << endl;
        }
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