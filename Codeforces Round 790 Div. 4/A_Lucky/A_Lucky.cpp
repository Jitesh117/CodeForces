#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n;
    cin >> n;
    string s;
    for(int i = 0;i<n;i++)
    {
        cin >> s;
        int f=0,l=0;
        for(int i = 0;i<3;i++)
        {
            f+=(s[i]-'0');
        }
        for(int i =3;i<6;i++)
        {
            l+=(s[i]-'0');
        }
        if(f == l)
            cout << "YES"<< endl;
        else 
            cout <<"NO"<< endl;
    }
    return 0;
}