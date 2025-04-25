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
		int ans=0,cnt=0;
		vector<int> v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
			if(v[i]==0)
			{
				cnt++;
			}
			else
			{
				cnt=0;
			}
			ans=max(cnt,ans);
		}
		cout<<ans<<endl;
	}
}

