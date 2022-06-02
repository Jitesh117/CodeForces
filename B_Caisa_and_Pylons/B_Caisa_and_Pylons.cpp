#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;
void solve()
{
    int n,x=0,y,nrg=0,result=0;
    cin >>n;
    for(int i = 1;i<=n;i++)
    {
        cin >> y;
        nrg += (x-y);
        if(nrg<0)
            {
                result+=-nrg;
                nrg = 0;
            }
        x = y;
    }
    cout << result <<endl;
    
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