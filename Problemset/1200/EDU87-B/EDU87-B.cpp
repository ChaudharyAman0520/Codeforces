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
		int ans=INT_MAX;
		int n=s.length();
		bool ansfound=false;
		for(int i=0;i<n;i++)
		{
			bool f1=false,f2=false,f3=false,found=false;
			int len=0;
			for(int j=i;j<n;j++)
			{
				len++;
				if(s[j]=='1')
				{
					f1=true;
				}
				else if(s[j]=='2')
				{
					f2=true;
				}
				else
				{
					f3=true;
				}
				if(f1&&f2&&f3)
				{
					found=true;
					break;
				}
			}
			if(found==true)
			{
				ansfound=true;
				ans=min(ans,len);
			}
		}
		if(!ansfound)
		{
			cout<<0<<endl;
		}
		else
		{
			cout<<ans<<endl;
		}
	}
}
