#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	bool flag=false;
	for(int mask=0;mask<(1<<n);mask++)
	{
		int ans=0;
		for(int i=0;i<n;i++)
		{
			if(mask&(1<<i))
			{
				ans+=v[i];
			}
			else
			{
				ans-=v[i];
			}
		}
		if(ans%360==0)
		{
			flag=true;
			break;
		}
	}
	if(flag==true)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
}
