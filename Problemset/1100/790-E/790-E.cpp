#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,q;
		cin>>n>>q;
		vector<int> v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		sort(v.rbegin(),v.rend());
		vector<int>psum(n);
		psum[0]=v[0];
		for(int i=1;i<n;i++)
		{
			psum[i]=psum[i-1]+v[i];
		}
		while(q--)
		{
			long long x;
			cin>>x;
			auto it=lower_bound(psum.begin(),psum.end(),x);
			if(it==psum.end())
			{
				cout<<-1<<endl;
			}
			else
			{
				cout<<it-psum.begin()+1<<endl;
			}
		}
	}
}
