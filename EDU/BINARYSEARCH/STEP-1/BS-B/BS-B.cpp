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
		int x,ans=-1;
		cin>>x;
		int L=0,R=n-1,mid;
		while(L<=R)
		{
			mid=L+(R-L)/2;
			if(v[mid]<=x)
			{
				ans=mid;
				L=mid+1;
			}
			else
			{
				R=mid-1;
			}
		}
		if(ans==-1)
		{
			cout<<0<<endl;
		}
		else
		{
			cout<<ans+1<<endl;
		}	
	}
}
