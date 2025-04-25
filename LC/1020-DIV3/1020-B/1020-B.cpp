#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int i=0;
		for(i=0;i<x;i++)
		{
			cout<<i<<" ";
		}
		i++;
		if(i>n)
		{
			cout<<endl;
			continue;
		}
		for(;i<n;i++)
		{
			cout<<i<<" ";
		}
		cout<<x<<" ";
		cout<<endl;
	}
}

