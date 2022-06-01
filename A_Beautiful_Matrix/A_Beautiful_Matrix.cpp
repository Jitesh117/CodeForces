#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

void solve()
{
 int a[5][5];
   for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cin >> a[i][j];
    }
   }
   for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        if(a[i][j] == 1){
            cout << abs(2 -i)+abs(2-j) ;
        }
    }
   }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    
    int n=1;
    while(n--)
    {
        solve();
    }
    return 0;
}