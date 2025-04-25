#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string ans;
		for(int i=1;i<=3;i++)
		{
			string s;
			cin>>s;
			ans+=s[0];
		}
		cout<<ans<<endl;
	}
}
