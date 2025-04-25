#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,c;
		cin>>n>>c;
		vector<long long>v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		long long L=1,R=1e9,mid,ans;
		while(L<=R)
		{
			mid=L+(R-L)/2;
			long long total=0;
			for(int i=0;i<n;i++)
			{
				total+=(v[i]+2*mid)*(v[i]+2*mid);
				if(total>c)
				{
					break;
				}
			}
			if(total==c)
			{
				ans=mid;
				break;
			}
			else if(total<c)
			{
				L=mid+1;
			}
			else
			{
				R=mid-1;
			}
		}
		cout<<ans<<endl;
	}
}
