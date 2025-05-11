#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
	cin>>n;
	vector<long long>v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	long long ans=0;
	for(int i=n;i>0;i--)
	{
		ans+=abs(v[i-1]-i);
	}
	cout<<ans<<endl;
}
