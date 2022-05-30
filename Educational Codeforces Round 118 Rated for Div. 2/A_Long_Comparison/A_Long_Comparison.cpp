#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

void solve()
{
    ll f,ften,s,sten;
    cin >> f >> ften;
    cin >> s >> sten;
    int mn = min(ften,sten);
    ften-=mn;
    sten-=mn;
    if(ften>=7)
        cout << '>' << endl;
    else if(sten>=7)
        cout << '<'<< endl;

    else
    {
        ll resf = f*pow(10,ften);
        ll ress = s*pow(10,sten);
        if(resf>ress)
            cout<< '>' << endl;
        else if(resf<ress)
            cout << '<' << endl;
        else    
            cout << '=' <<endl;
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