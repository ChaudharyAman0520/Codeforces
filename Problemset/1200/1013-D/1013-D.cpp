#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,m,k;
		cin>>n>>m>>k;
		long long L=0,R=m,mid;
		while(L+1<R)
		{
			mid=(L)+(R-L)/2;
			if((mid*(m/(mid+1))+m%(mid+1))*n>=k)
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
}
