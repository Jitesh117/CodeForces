#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

void solve()
{
    int n;
    cin >> n;
    vi v(n);
    for(int i = 0;i<n;i++)
        cin >> v[i];
    sort(v.begin(),v.end());
    if(v[0] == 0)
    {
        int pos=1;
        for(int i = 1;i<n;i++)
        {
            if(v[i]!=0)
                break;
            pos=i+1;
        }
        cout << v.size()-pos << endl;
    }
    else
    {   int flag = 0;
        for(int i = 1;i<n;i++)
        {
            if(v[i] == v[i-1])
            {   flag = 1;
                break;
            }
        }
        if(flag)
            cout << v.size()<< endl;
        else
            cout << v.size()+1<< endl;
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