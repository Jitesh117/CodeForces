#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

void solve()
{
    string s;
    cin >> s;
    string t;
    for(int i = 0;i<s.size();i++)
    {
        if(s[i]== 'a' ||s[i]== 'A' ||s[i]== 'e' ||s[i]== 'E' ||s[i]== 'i' ||s[i]== 'I' ||s[i]== 'o' ||s[i]== 'O' ||s[i]== 'u' ||s[i]== 'U' ||s[i]== 'y' ||s[i]== 'Y')
            {
                int temp;
            }
        else
        {
            t.push_back('.');
            if(isupper(s[i]))
                t.push_back(tolower(s[i]));
            else
                t.push_back(s[i]);
        }
    }
    cout << t;
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