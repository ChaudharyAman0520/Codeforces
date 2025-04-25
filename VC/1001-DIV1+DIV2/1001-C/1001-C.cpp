#include<bits/stdc++.h>
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
		long long ans=INT_MIN;
		long long sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
			sum+=v[i];
		}
		if(n!=1)
		ans=max(sum,-sum);
		else
		{
		cout<<sum<<endl;
		continue;
		}
		while(--n)
		{
			sum=0;
			for(int i=0;i<n;i++)
			{
				v[i]=v[i+1]-v[i];
				sum+=v[i];
			}
			//cout<<ans<<endl<<sum<<endl<<abs(v[n-1]-v[0])<<endl;
			if(n==1)
			ans=max(ans,max(sum,-sum));
			else
			ans=max(ans,max(sum,-sum));
		}
		cout<<ans<<endl;
	}
}
