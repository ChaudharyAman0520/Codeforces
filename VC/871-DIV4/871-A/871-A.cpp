#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int ans=0;
		string l="codeforces";
		for(int i=0;i<10;i++)
		{
			if(s[i]!=l[i])
			{
				ans++;
			}
		}
		cout<<ans<<endl;
	}
}
