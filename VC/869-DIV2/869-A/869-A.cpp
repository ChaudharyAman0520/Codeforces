#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		string me;
		cin>>me;
		int ans=n;
		for(int i=1;i<n;i++)
		{
			string s;
			cin>>s;
			if(s!=me)
			ans--;
		}
		cout<<ans<<endl;
	}
}
