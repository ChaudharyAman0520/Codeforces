#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<long long> v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		bool flag=true;
		for(int i=0;i<n;i++)
		{
			if(v[i]<=(2*n)-1)
			{
				flag=false;
			}
		}
		if(flag)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
	}
}
