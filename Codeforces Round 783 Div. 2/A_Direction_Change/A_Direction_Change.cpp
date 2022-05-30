#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

void solve()
{
    int a,b;
    cin >> a >> b;
    int sum = a+b;
    if(a<b)
        {
            a = sum-a;
            b = sum-a;
        }
  
    if( a == b)
        cout << 2*a - 2 << endl;
    else if(b == 1 && a>2)
        cout << -1 << endl;
    else{
        int d = a-b;
        if( d %2 ==0)
        cout << 2*b-2 + 2*d << endl;
        else
            cout << 2*b-2 + 2*d -1 << endl;
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