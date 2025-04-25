#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		vector<int> v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		long long sum=0;
		int l=-1,r=-1;
		for(int i=0;i<n;i++)
		{
			sum+=v[i];
			if(v[i]%x!=0)
			{
				if(l==-1)
				{
					l=i;
				}
				r=i;
			}
		}
		
		if(sum%x!=0)
		{
			cout<<n<<endl;
		}
		else if(l==-1)
		{
			cout<<-1<<endl;
		}
		else
		{
			cout<<n-min(l+1,n-r)<<endl;
		}
	}
}
