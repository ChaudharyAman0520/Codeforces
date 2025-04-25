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
		int sk01=INT_MAX,sk02=INT_MAX,ans=INT_MAX;
		while(n--)
		{
			int time;
			string skill;
			cin>>time>>skill;
			if(skill=="10")
			{
				sk01=min(sk01,time);
			}
			else if(skill=="01")
			{
				sk02=min(sk02,time);
			}
			else if(skill=="11")
			{
				ans=min(ans,time);
			}
		}	
		//cout<<sk01<<" "<<sk02<<" "<<ans<<endl;
		if(sk01==INT_MAX||sk02==INT_MAX)
		{
			if(ans==INT_MAX)
			{
				cout<<-1<<endl;
			}
			else
			{
				cout<<ans<<endl;
			}
		}
		else
		{
			if(ans==INT_MAX)
			{
				cout<<sk01+sk02<<endl;
			}
			else
			{
				cout<<min(ans,sk01+sk02)<<endl;
			}
		}
	}
}

