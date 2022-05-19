#include<bits/stdc++.h>
using namespace std;
void solve()
{
      int n;
        cin >>n;
        vector<int> temp(n);
        int odd1=0,odd2=0,even1=0,even2=0;
        for(int i = 0;i<n;i++)
            {
                cin >> temp[i];
                if(i%2 ==0)
                {
                    if(temp[i]%2==0)
                        even2=1;
                    else
                        odd2=1;
                }
                else
                {
                    if(temp[i]%2 == 0)
                        even1=1;
                    else
                        odd1=1;
                }
            }
            if(even2 && odd2)
                cout << "NO\n";
            else if(even1 && odd1)
                cout << "NO\n";
            else 
                cout << "YES\n";
    
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