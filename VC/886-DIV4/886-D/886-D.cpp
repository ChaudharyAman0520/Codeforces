#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,k;
		cin>>n>>k;
		vector<long long>v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		sort(v.begin(),v.end());
		long long check[n-1];
		for(int i=0;i<n-1;i++)
		{
			if(v[i+1]-v[i]<=k)
			{
				check[i]=1;
			}
			else
			{
				check[i]=0;
			}
		}
		/*
		for(int i=0;i<n-1;i++)
		{
			cout<<check[i]<<" ";
		}
		cout<<endl;
		*/
		
		long long cnt=0,ans=0;
		for(int i=0;i<n-1;i++)
		{
			if(check[i]==1)
			{
				cnt++;
			}
			else
			{
				cnt=0;
			}
			ans=max(ans,cnt);
		}
		cout<<n-1-ans<<endl;
	}
}

