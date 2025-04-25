#include<bits/stdc++.h>
using namespace std;
main()
{
	long long n;
	double l;
	cin>>n>>l;
	vector<long long>v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	double ans=v[0];
	for(int i=1;i<n;i++)
	{
		ans=max(ans,(v[i]-v[i-1])/2.0);
		//cout<<ans<<endl;
	}
	ans=max(ans,l-v[n-1]);
	printf("%.10f",ans);
}
