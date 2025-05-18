#include<bits/stdc++.h>
using namespace std;
main()
{
	int n,q;
	cin>>n>>q;
	vector<long long> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	while(q--)
	{
		int l=0,r=n-1,mid=0;
		bool found=false;
		long long x;
		cin>>x;
		while(l<=r)
		{
			mid=(l+r)/2;
			if(v[mid]==x)
			{
				found=true;
				break;
			}
			else if(v[mid]<x)
			{
				l=mid+1;
			}
			else
			{
				r=mid-1;
			}
		}
		if(found)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
}
