#include<bits/stdc++.h>
#define int long long int
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> v(n);
		int cnt[30]={0};
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
			for(int j=0;j<30;j++)
			{
				if(v[i]&(1<<j))
				{
					cnt[j]++;
				}
			}
		}
		int ans=0,sum=0;
		for(int i=0;i<n;i++)
		{
			sum=0;
			for(int j=0;j<30;j++)
			{
				if(v[i]&(1<<j))
				{
					sum+=((n-cnt[j])<<j);
				}
				else
				{
					sum+=cnt[j]<<j;
				}
			}
			ans=max(ans,sum);
		}
		cout<<ans<<endl;
	}
}
