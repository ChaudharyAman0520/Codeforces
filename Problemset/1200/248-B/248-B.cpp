#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
	cin>>n;
	long long v[n+1],t[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>v[i];
		t[i]=v[i];
	}
	sort(t+1,t+1+n);
	for(int i=1;i<=n;i++)
	{
		v[i]+=v[i-1];
		t[i]+=t[i-1];
	}
	int q;
	cin>>q;
	while(q--)
	{
		int type,L,R;
		cin>>type>>L>>R;
		if(type==1)
		{
			cout<<v[R]-v[L-1]<<endl;
		}
		else
		{
			cout<<t[R]-t[L-1]<<endl;
		}
	}
}
