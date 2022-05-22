#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

void solve()
{
    int n,r,b;
    cin >> n >> r >> b;
    string s="";
    int t = r/b;
    for(int i =0;i<n;i++)
        {
           if(i%t == 0 && i>0)
             s+='B';
            else
             s+='R';
        }
    cout << s << endl;
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