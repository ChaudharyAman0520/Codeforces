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
		bool flag=false;
		vector<long long>v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		int mini=min_element(v.begin(),v.end())-v.begin();
		long long g=0;
		for(int i=0;i<n;i++)
		{
			if(v[i]%v[mini]==0&&i!=mini)
			{
				g=__gcd(v[i],g);
			}
		}
		if(g==v[mini])
		{
			flag=true;
		}
		else
		{
			flag=false;
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
