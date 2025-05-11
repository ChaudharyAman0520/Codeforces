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
		int ans=1;
		int c=0;
		for(int i=1;i<=n;i++)
		{
			ans=ans+c;
			if(i%2!=0)
			{
				c++;
			}
		}
		cout<<ans<<endl;
	}
}
