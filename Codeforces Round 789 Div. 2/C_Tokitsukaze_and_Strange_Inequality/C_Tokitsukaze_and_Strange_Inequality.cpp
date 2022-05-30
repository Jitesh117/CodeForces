#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define mem(a,b) memset((a),(b),sizeof(a))
const int MAX=1e5+10;
int a[MAX];
ll f[MAX],bitf[MAX];
int n,i,j,k,l,T;
ll ans;
void solve()
{       
       int n,i,j,k,l,T;
	ll ans;
	scanf("%d",&T);
	while(T--)
	{
	    scanf("%d",&n);
		for(i=1;i<=n;i++) 
            scanf("%d",&a[i]);
		mem(f,0);
		for(j=1;j<=n;j++)
		{
			for(l=j+1;l<=n;l++)
			{
				if(a[j]>a[l]) 
                    f[j]++;
			}
		}
		ans=0;
		for(k=1;k<=n;k++)
		{
			for(j=1;j<k;j++)
			{
				if(a[j]>a[k])
                    f[j]--;
			}
			bitf[0]=0;
			for(i=1;i<=k;i++)
                bitf[i]=bitf[i-1]+f[i];
			for(i=1;i<k;i++)
			{
				if(a[i]<a[k])
                    ans+=bitf[k-1]-bitf[i];
			}
		}
		printf("%lld\n",ans);
	}
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    
  
   solve();
    return 0;
}