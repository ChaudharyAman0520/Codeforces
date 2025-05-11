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
		int count=0;
		for(auto i:v)
		{
			if(i==v[n-1])
			{
				count++;
			}
		}
		long long value=v[n-1]-v[0];
		if(value-1>k||(value==k+1&&count>1))
		{
			cout<<"Jerry"<<endl;
		}
		else
		{
			long long sum=0;
			for(int i=0;i<n;i++)
			{
				sum+=v[i];
			}
			if(sum%2!=0)
			{
				cout<<"Tom"<<endl;
			}
			else
			{
				cout<<"Jerry"<<endl;
			}
		}
	}
}
