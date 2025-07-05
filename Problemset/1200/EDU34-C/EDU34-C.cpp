#include<bits/stdc++.h>
#define int long long
using namespace std;
main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	unordered_map<int,int>mp;
	for(auto i:v)
	{
		mp[i]++;
	}
	int ans=-1;
	for(auto i:mp)
	{
		if(i.second>ans)
		{
			ans=i.second;
		}
	}
	cout<<ans<<endl;
}
