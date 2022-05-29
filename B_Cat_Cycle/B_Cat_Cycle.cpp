#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

void solve()
{
    int n =1,k=1;
    cin >> n >> k;
    k--;
    if(n %2 == 0)   
        cout << 1 + k%n << endl;
    else
    {
        int inte = k/((n-1)/2);
        cout << 1+(k+inte)%n << endl;
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