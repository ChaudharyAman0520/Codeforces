#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
	long long l,r,x;
	cin>>n>>l>>r>>x;
	vector<long long> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	long long ans=0,maxi=LLONG_MIN,mini=LLONG_MAX,fans=0;
	for(int mask=0;mask<(1<<n);mask++)
	{
		ans=0,mini=LLONG_MAX,maxi=LLONG_MIN;
		for(int i=0;i<n;i++)
		{
			if(mask&(1<<i))
			{
				ans+=v[i];
				mini=min(mini,v[i]);
				maxi=max(maxi,v[i]);
			}
		}
		if((ans>=l&&ans<=r)&&(maxi-mini)>=x)
		{
			fans++;
		}
	}
	cout<<fans<<endl;
}
