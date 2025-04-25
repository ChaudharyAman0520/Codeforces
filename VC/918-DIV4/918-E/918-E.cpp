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
		vector<long long> v(n+1);
		for(int i=1;i<=n;i++)
		{
			cin>>v[i];
			if(i%2==0)
			{
				v[i]*=-1;
			}
		}
		long long pref[n+1];
		bool flag=false;
		pref[1]=v[1];
		for(int i=2;i<=n;i++)
		{
			pref[i]=pref[i-1]+v[i];
			if(pref[i]==0)
			{
				flag=true;
				break;
			}
		}
		if(flag)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}
