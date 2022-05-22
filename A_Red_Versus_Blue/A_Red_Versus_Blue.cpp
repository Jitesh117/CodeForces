#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

void solve()
{
    int n,r,b;
    cin >> n >> r >> b;
    int p=r/(b+1),q=r%(b+1);
    for(int i=0;i<q;i++)   
        cout<<string(p+1,'R')<<'B';
    for(int i=q;i<b;i++)
        cout<<string(p,'R')<<'B';
    cout<<string(p,'R');
    cout<<endl;
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