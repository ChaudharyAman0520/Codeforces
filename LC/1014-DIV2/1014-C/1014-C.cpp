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
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		long long sum=0,odc=0;
		for(int i=0;i<n;i++)
		{
			sum+=v[i];
			if(v[i]%2!=0)
			{
				odc++;
			}
		}
		if(odc==0||odc==n)
		{
			cout<<*max_element(v.begin(),v.end())<<endl;
		}
		else
		{
			cout<<sum-odc+1<<endl;
		}
	}
}
