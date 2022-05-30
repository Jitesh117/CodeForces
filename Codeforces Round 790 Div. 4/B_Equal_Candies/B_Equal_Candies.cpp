#include<bits/stdc++.h>
using namespace std;
int main()
{
   
   
    int n;
    cin >> n;
    for(int i = 0;i<n;i++)
    {
        int t;
        cin >> t;
        vector<int> v;
        for(int j = 0;j<t;j++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        sort(v.begin(),v.end());
        int sum = 0;
        for(int i = 1;i<v.size();i++)
        {
            sum+=v[i]-v[0];
        }
        cout << sum << endl;
    }

    return 0;
}