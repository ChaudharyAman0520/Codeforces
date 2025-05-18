#include<bits/stdc++.h>
using namespace std;
bool good(long long t,long long x,long long y,long long n)
{
	long long time=t-min(x,y);
	if(time<0)
	{
		return false;
	}
	else
	{
		return ((time/x)+(time/y)>=n-1);
	}
}
main()
{
	long long n,x,y;
	cin>>n>>x>>y;
	long long L=0,R=2*1e9;
	while(L+1<R)
	{
		long long mid=L+(R-L)/2;
		if(good(mid,x,y,n))
		{
			R=mid;
		}
		else
		{
			L=mid;
		}
	}
	cout<<R<<endl;
}
