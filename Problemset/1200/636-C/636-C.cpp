#include<bits/stdc++.h>
using namespace std;
int sign(long long x)
{
	if(x>0)
	return 1;
	else
	return 0;
}
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
		long long sum=0;
		long long maxl=INT_MIN;
		for(int i=0;i<n;i++)
		{
			maxl=INT_MIN;
			long long curr=v[i];
			int j=i;
			while(j<n&&sign(curr)==sign(v[j]))
			{
				maxl=max(maxl,v[j]); 
				j++;
			}
			sum=sum+maxl;
			i=j-1;
		}
		cout<<sum<<endl;
	}
}
