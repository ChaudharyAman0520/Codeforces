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
		vector<long long>v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		long long mindif=LLONG_MAX;
		for(int i=1;i<n;i++)
		{
			if(v[i]-v[i-1]<mindif)
			{
				mindif=v[i]-v[i-1];
			}
		}
		if(is_sorted(v.begin(),v.end())==false)
		{
			cout<<0<<endl;
		}
		else
		{
			if(mindif==0)
			{
				cout<<1<<endl;
			}
			else
			{
				cout<<mindif/2+1<<endl;
			}
		}
	}
}
