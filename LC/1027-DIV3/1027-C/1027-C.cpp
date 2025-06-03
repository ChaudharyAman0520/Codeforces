#include<bits/stdc++.h>
#define int long long
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		int ans=0;
		int last=LLONG_MIN;
		for(int i=0;i<n;i++)
		{
			if(v[i]>last+1)
			{
				ans++;
				last=v[i];
			}
		}
		cout<<ans<<endl;
	}
}

