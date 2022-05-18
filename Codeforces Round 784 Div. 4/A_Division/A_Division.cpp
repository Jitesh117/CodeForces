#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int t;
    cin >> t;
    if(t<=1399)
        cout << "Division 4" << endl;
    else if(t<=1599)
        cout << "Division 3" << endl;
    else if(t<=1899)
        cout << "Division 2"<< endl;
    else
        cout << "Division 1"<< endl;
    
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