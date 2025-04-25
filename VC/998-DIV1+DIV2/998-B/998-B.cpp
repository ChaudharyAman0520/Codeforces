#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,k;
		cin>>n>>m>>k;
		string s;
		cin>>s;
		int count0=0;
		int i=0,ans=0;
		while(i<n)
		{
			count0=0;
			if(s[i]=='1')
			{
				i++;
				continue;
			}
			else
			{
				while(s[i]=='0')
				{
					i++;
					count0++;
				}
				ans=ans+ceil(floor(count0/m)/k);
			}
		}
		cout<<ans<<endl;
	}
}

