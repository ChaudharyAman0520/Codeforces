#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		vector<long long>v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		sort(v.begin(),v.end());
		int i=0,ans=0;
		if(n==1)
		{
			cout<<1<<endl;
			continue;
		}
		while(i<n)
		{
			while(v[i]==v[i+1]&&i<n-1)
			{
				i++;
			}
			while(k!=0)
			{
				i++;
				k--;
			}
			ans++;
			i++;
		}
		cout<<ans<<endl;
	}
}
