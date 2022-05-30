#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

bool bin(vi &v,int key)
{
    int beg = 0,end = v.size()-1;
    while(beg<=end)
    {
        int mid = beg+(end-beg)/2;
        if(v[mid] == key)
            return true;
        else if(v[mid] < key)
            beg = mid+1;
        else
            end = mid-1;
    }
    return false;
}

void solve()
{
    int n;
    cin >> n;
    vi v(n);
    for(int i = 0;i<n;i++)
        cin >> v[i];
    sort(v.begin(),v.end());
    for(int i = 0;i<n/2;i++)
        cout << v[n-i-1] << " " << v[0] << endl;
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