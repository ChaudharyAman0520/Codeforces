#include<bits/stdc++.h>
using namespace std;
main()
{
	int n,k;
	cin>>n>>k;
	vector<long long> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	while(k--)
	{
		int L=0,R=n-1,mid,ans=-1,x;
		cin>>x;
		while(L<=R)
		{
			mid=L+(R-L)/2;
			if(v[mid]>=x)
			{
				ans=mid;
				R=mid-1;
			}
			else
			{
				L=mid+1;
			}
		}
		if(ans==-1)
		{
			cout<<n+1<<endl;
		}
		else
		{
			cout<<ans+1<<endl;
		}
	}
}
