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
		long long ans=0;
		long long n=s.length();
		int i=n-1;
		while(s[i]=='0')
		{
			ans++;
			i--;
		}
		for(int j=0;j<i;j++)
		{
			if(s[j]!='0')
			{
				ans++;
			}
		}
		cout<<ans<<endl;
	}
}

