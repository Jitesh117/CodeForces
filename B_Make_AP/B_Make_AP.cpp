#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

void solve()
{
   int a,b,c;
   cin >> a >> b >> c;
   int newa = b - (c-b);
   if(newa>=a and newa%a == 0 and newa!=0)
        { cout << "YES\n";
          return;
        }
   int newb = a+(c-a)/2;
   if(newb >=b and newb%b == 0 and newb!=0 and (c-a)%2 == 0)
    { cout << "YES\n";
         return;
    }
   int newc = a + 2*(b-a);
   if(newc>=c and newc%c == 0 and newc!=0)
       {
            cout << "YES\n";
            return;
       }
   cout << "NO\n";

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