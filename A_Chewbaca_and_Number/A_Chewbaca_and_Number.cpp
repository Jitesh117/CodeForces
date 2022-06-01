#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

void solve()
{
    string s;
    cin >> s;
    for(auto& i:s)
        if(i>'4')
            i = '9' - i +'0';
    if(s.front() == '0')
        s.front() = '9';
    cout << s << endl;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    
    int n=1;
    while(n--)
    {
        solve();
    }
    return 0;
}