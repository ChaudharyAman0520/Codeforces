#include<bits/stdc++.h>
using namespace std;
bool possible(double mid,int k,vector<long long>v,int n)
{
	long long cnt=0;
	for(int i=0;i<n;i++)
	{
		cnt+=v[i]/mid;
	}
	return cnt>=k;
}
main()
{
	int n,k;
	cin>>n>>k;
	vector<long long>v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	double L=0.0,R=*max_element(v.begin(),v.end()),mid,ans;
	while(R-L>1e-6)
	{
		mid=L+(R-L)/2;
		if(possible(mid,k,v,n)==true)
		{
			ans=mid;
			L=mid;
		}
		else
		{
			R=mid;
		}
	}
	cout<<fixed<<setprecision(6)<<ans<<endl;
}
