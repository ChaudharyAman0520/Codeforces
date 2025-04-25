#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,k,x,sum=0;
		cin>>n>>k>>x;
		vector<long long>v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
			sum+=v[i];
		}
		if(x>k*sum)
		{
			cout<<0<<endl;
			continue;
		}
		long long a=x/sum;
		long long b=x%sum;
		if(b==0)
		{
			a--;
			b=sum;
		}
		long long ans=(n*k)-(n*a);
		long long suf=0;
		for(int i=n-1;i>=0;i--)
		{
			suf+=v[i];
			if(suf>=b)
			{
				break;
			}
			ans--;
		}
		cout<<ans<<endl;
	}
}

